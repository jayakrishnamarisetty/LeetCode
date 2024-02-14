class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg, pos;
        for(auto num : nums){
           if(num < 0) 
            neg.push_back(num);
           else pos.push_back(num);
        }
        vector<int> result;
        int n = 0, p = 0;
        while(n < neg.size() && p <= pos.size()){
             result.push_back(pos[p++]);
             result.push_back(neg[n++]);
        }
        return result;
    }
};