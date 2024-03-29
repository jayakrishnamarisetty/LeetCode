class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement = *max_element(nums.begin(), nums.end());
        long long ans = 0, rug = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxElement) {
                k--;
            }
            while (!k) {
                if (nums[rug] == maxElement) {
                    k++;
                }
                rug++;
            }
            ans += rug;
        }
        return ans;
    }
};