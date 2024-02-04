class Solution {
public:
    void rug(vector<int>n,int i,int j,vector<vector<int>>& ans){
        if (i >= j) {
            ans.push_back(n);
            return;
        }
        for (int k = i; k <= j; k++) {
            swap(n[k], n[i]);
            rug(n, i + 1, j, ans);
            swap(n[k], n[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        rug(nums, 0, nums.size() - 1, ans);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        
    }
};