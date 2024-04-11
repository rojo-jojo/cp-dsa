class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowZero = 0;
        int ROWS = matrix.size(), COLS = matrix[0].size();
        
        for (int r=0; r<ROWS; r++) {
            for (int c=0; c<COLS; c++) {
                if (matrix[r][c] == 0) {
                    matrix[0][c] = 0;
                    if (r > 0) {matrix[r][0] = 0;}
                    else {rowZero = 1;}
                }
            }
        }

        for (int r=1; r<ROWS; r++) {
            for (int c=1; c<COLS; c++) {
                if (matrix[r][0] == 0 || matrix[0][c]) matrix[r][c] = 0;
            }
        }
        
        if (matrix[0][0]==0) {
            for (int r=0; r < ROWS; r++) {
                matrix[r][0] = 0;
            }
        }
        if (rowZero==1) {
            for (int c=0; c < COLS; c++) {
                matrix[0][c] = 0;
            }
        }
    }
};