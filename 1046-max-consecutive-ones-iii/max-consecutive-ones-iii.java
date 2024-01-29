class Solution {
    public int longestOnes(int[] num, int k) {
        int i=0,j=0;
        int n=num.length;
        while(j<n){
            if(num[j]==0){
                k--;
            }
            if(k<0){
                if(num[i]==0){
                    k++;
                }
                i++;
            }
            j++;
        }
        return j-i;
    }
}