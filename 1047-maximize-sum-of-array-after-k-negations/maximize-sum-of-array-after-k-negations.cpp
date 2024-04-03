class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        while (k > 0 && i < n && nums[i] < 0) {
            nums[i] = -nums[i];
            i++;
            k--;
        }
        if (k > 0 && k % 2 != 0) {
            sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
        }
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return sum;
    }
};
