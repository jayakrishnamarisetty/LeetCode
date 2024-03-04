class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        sort(t.begin(), t.end());
        int s = 0;
        int j = t.size()-1;
        int i=0;
        int m=0;
        while (i<=j) {
            if (t[i] <= power) {
                s++;
                power -= t[i];
                i++;
            } else if (s > 0) {
                s--;
                power += t[j];
                j-=1;
            } else {
                break;
            }
            m=max(m,s);
        }
        return m;
    }
};
