class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                break;
            }
            char rug = s[left];
            while (left <= right && s[left] == rug) {
                left++;
            }
            while (right >= left && s[right] == rug) {
                right--;
            }
        }
        
        return max(0, right - left + 1);
    }
};
