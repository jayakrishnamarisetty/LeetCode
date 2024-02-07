
class Solution {
public:
     vector<std::vector<int>> result;
    void veda(const std::vector<int>& r, int ind, std::vector<int>& ans, std::vector<std::vector<int>>& result, int t, int sum) {
        if (sum == t) {
            result.push_back(ans);
            return;
        }  
        if (ind >= r.size() || sum > t) {
            return;
        }
            ans.push_back(r[ind]);
            veda(r, ind + 1, ans, result, t, sum + r[ind]);
            // for (int i = ind; i < r.size(); ++i) {
            //     if (i > ind && r[i] == r[i - 1])
            //         continue;  
            while(ind+1<r.size() && r[ind]==r[ind+1])
            {
                ind++;
            }
            ans.pop_back();
            veda(r,ind+1,ans,result,t,sum);
        }

    vector<std::vector<int>> combinationSum2(std::vector<int>& rug, int B) {
        sort(rug.begin(), rug.end());
        vector<int> ans;
        veda(rug, 0, ans, result, B, 0);
        return result;
    }
};
