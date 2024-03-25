class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>rug;
        vector<int>veda;
        for(auto it : nums){
            rug[it]++;
        } 
        for(auto it1:rug){
            if(it1.second==2){
                veda.push_back(it1.first);
            }
        } 
        return veda; 
    }
};