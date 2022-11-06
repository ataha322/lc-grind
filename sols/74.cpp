class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int num_rows = matrix.size();
        int num_cols = matrix[0].size();

        int row = 0;
        int col = num_cols - 1;

        while(row < num_rows && col > -1) {
            int mid = matrix[row][col];
            if (mid == target)
                return true;
            else if (mid > target)
                col--;
            else
                row++;
        }
        return false;
    }
};
