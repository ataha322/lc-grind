class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ret (n, vector<int> (m, -1));
        queue<pair<int,int>> q;
        
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    ret[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};
        while (!q.empty()) {
            auto node = q.front(); q.pop();
            for (int k = 0; k < 4; k++) {
                pair<int,int> nbr = {node.first + dx[k], node.second + dy[k]};
                if (nbr.first >= 0 && nbr.first < n && nbr.second >= 0 && nbr.second < m) {
                    if (ret[nbr.first][nbr.second] == -1) {
                        ret[nbr.first][nbr.second] = ret[node.first][node.second] + 1;
                        q.push({nbr.first, nbr.second});
                    }                    
                }
            }
        }
        
        return ret;
    }
    
    
};
