class Solution {
public:
    int fun(int n){
        int ans = n;
        if(n==0){
            return 0;
        }
        for(int i = 1; i * i <= n; i++){
            int temp = n/(i * i);
            temp += fun(n % (i * i));
            ans = min(ans,temp);
        }
        return ans;
    }
    int numSquares(int n) {
        return fun(n);
    }
};