class Solution {
public:
    void veda(vector<int> r, int ind, vector<int> &ans,vector<vector<int>> &result, int t, int size, int sum) {
        if (sum == t) {
            result.push_back(ans);
            return;
        }  
        if (ind >= size || sum > t) {
            return;
        }
        ans.push_back(r[ind]);
        veda(r, ind , ans, result, t, size, sum + r[ind]);
        ans.pop_back();
        int j = ind +1;
        while(j < size && r[j]==r[j-1])
        j+=1;
        veda(r, j, ans,result, t, size, sum);
    }
    vector<vector<int>> combinationSum(vector<int>& rug, int B) {
        sort(rug.begin(), rug.end());
        vector<int> ans;
        vector<vector<int>> result;
        veda(rug, 0, ans,result,B, rug.size(), 0);
        return result;
    }
};