class Solution {
public:
    bool rug(int i, int j, int m, int n, vector<vector<char>>& board, string word, vector<vector<int>>& veda, int k) {
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[k] || veda[i][j] == 1) 
            return false;
        if (k == word.size() - 1 && word[k] == board[i][j]) 
            return true;
        veda[i][j] = 1;
        bool left = rug(i, j - 1, m, n, board, word, veda, k + 1);
        bool right = rug(i, j + 1, m, n, board, word, veda, k + 1);
        bool top = rug(i - 1, j, m, n, board, word, veda, k + 1);
        bool bottom = rug(i + 1, j, m, n, board, word, veda, k + 1);
        veda[i][j] = 0; 
        if (left || right || top || bottom) 
            return true;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> veda(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    if (rug(i, j, m, n, board, word, veda, 0)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
