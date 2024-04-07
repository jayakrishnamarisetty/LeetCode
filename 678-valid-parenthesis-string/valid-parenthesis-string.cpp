class Solution {
public:
    bool checkValidString(string s) {
        int rug = 0, veda = 0;

        for (char c : s) {
            if (c == '(') {
                rug++;
                veda++;
            } else if (c == ')') {
                rug--;
                veda--;
            } else {
                rug--;
                veda++;
            }
            if (veda < 0) return false;
            if (rug < 0) rug = 0;
        }
        
        return rug == 0;
    }
};