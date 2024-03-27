class Solution {
public:
  int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int rug = 0, veda = 0, product = 1, count = 0;
    int n = nums.size();
    if(k <= 1) return 0;
    while (veda < n) {
      product *= nums[veda];
      while (product >= k) product /= nums[rug++];
      count += 1 + (veda - rug);
      veda++;
    }
    return count;
  }
};