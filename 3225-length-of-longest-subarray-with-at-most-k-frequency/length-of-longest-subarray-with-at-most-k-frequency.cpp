class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int rug=0;
        int l=0;
        unordered_map<int,int> veda;
        int n=nums.size();
        for(int i=0;i<n;i++){
            veda[nums[i]]++;
            if(veda[nums[i]]>k){
                while(nums[l]!=nums[i]){
                    veda[nums[l]]--;
                    l++;
                }
                veda[nums[l]]--;
                l++;
            }
            rug=max(rug,i-l+1);
        }
        return rug;
    }
};