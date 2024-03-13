class Solution {
    public int pivotInteger(int n) {
     int rug=n*(n+1)/2;
     int sq=(int)Math.sqrt(rug);
     if(sq*sq==rug){
        return sq;
     }
     return -1;

    }
}