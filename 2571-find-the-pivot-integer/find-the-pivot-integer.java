class Solution {
    public int pivotInteger(int n) {
     int sum=n*(n+1)/2;
     int sq=(int)Math.sqrt(sum);
     if(sq*sq==sum){
        return sq;
     }
     return -1;

    }
}