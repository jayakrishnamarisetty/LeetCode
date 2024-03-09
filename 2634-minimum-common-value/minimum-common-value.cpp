class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //sort(nums1.begin(),nums1.end());
        //int c=INT_MAX;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size() ){
            
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]>nums2[j]) j++;
            else
             return nums1[i];
        }
        //if(c!=INT_MAX) return c;
        return -1;
        
        
    }
};