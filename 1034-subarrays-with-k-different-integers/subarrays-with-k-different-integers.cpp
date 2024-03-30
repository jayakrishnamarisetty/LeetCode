class Solution {
public:
    int rug(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0, c = 0;
        unordered_map<int, int> veda;
        while (j < n) {
            veda[nums[j]]++;
            while (i <= j && veda.size() > k) {
                veda[nums[i]]--;
                if (veda[nums[i]] == 0) 
                    veda.erase(nums[i]);
                i++;
            }
            c += (j - i) + 1;
            j++;
        }
        return c;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return rug(nums, k) - rug(nums, k - 1);
    }
};
