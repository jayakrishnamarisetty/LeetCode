class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int res=0;
        while(l<r){
            l>>=1;
            r>>=1;
            res++;
        }
        return l<<res;
    }
};