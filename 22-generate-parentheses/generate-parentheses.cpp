class Solution {
public:
    void rug(int close, int open, string s, int n, vector<string>& result) {
        if (close + open >= n * 2) {
            result.push_back(s);
            return;
        }
        if (close > open)
            return;
        if (open == n) {
            rug(close + 1, open, s + ')', n, result);
        } else {
            rug(close, open + 1, s + '(', n, result);
            rug(close + 1, open, s + ')', n, result);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        rug(0, 0, "", n, result);
        return result;
    }
};