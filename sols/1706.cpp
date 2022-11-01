class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int numCols = grid[0].size();
        int numRows = grid.size();
        pair<int, int> ball = {0,0};
        vector<int> result (numCols);
        
        for (int i = 0; i < numCols; i++) {
            ball = {0,i};
            while (ball.second >= 0 && ball.second < numCols && ball.first < numRows) {
                
                if (grid[ball.first][ball.second] == 1)
                    if (ball.second + 1 == numCols || grid[ball.first][ball.second + 1] == -1)
                        break;
                
                if (grid[ball.first][ball.second] == -1)
                    if (ball.second - 1 < 0 || grid[ball.first][ball.second - 1] == 1)
                        break;
                
                ball.second += grid[ball.first][ball.second];
                ball.first++;
            }
            
            if (ball.first == numRows && ball.second >= 0 && ball.second < numCols)
                result[i] = ball.second;
            else
                result[i] = -1;
            
        }
         
        return result;
    }
};
