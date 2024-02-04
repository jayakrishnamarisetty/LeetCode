class Solution {
public:
    void rug(vector<int>v,int i,int j,vector<vector<int>> &ans){
        if(i>=j){
            ans.push_back(v);
            return;
        } 
        for(int k=i;k<=j;k++){
            swap(v[k],v[i]);
            rug(v,i+1,j,ans);
            swap(v[k],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        rug(nums,0,nums.size()-1,ans);
        return ans;
        
    }
};