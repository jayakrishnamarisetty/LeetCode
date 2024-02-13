class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = -1, j = -1;
        for (int k = 0; k < nums.size(); ++k) {
            if (nums[k] == target) {
                if (i == -1) {
                    i = k;
                }
                j = k;
            }
        }
        return {i, j};
    }
};