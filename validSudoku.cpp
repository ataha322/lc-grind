class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int i = 0;
        int j = 0;
        int size = board.size();
            
        vector<unordered_set<int>> rows (size);
        vector<unordered_set<int>> columns (size);
        vector<unordered_set<int>> squares (size);
         
        for (i = 0; i < size; i++) {
            for (j = 0; j < size; j++) {
                if (board[i][j] == '.')
                    continue;
                
                if (rows[i].find(board[i][j]) != rows[i].end())
                    return false;
                else
                    rows[i].insert(board[i][j]);
                
                if (columns[j].find(board[i][j]) != columns[j].end())
                    return false;
                else
                    columns[j].insert(board[i][j]);
                
                unordered_set<int>& ref = squares[i / 3 * 3 + j / 3];
                if (ref.find(board[i][j]) != ref.end())
                    return false;
                else
                    ref.insert(board[i][j]);
            }
        }
        
        return true;
    }
};
