/*
Step 1: If there are R rows then run a binary search from 0 to R on the last column to find out the correct row for lookup.
Hint - treat the last column as an array to perform binary search
Step 2: Once the correct row is found run a binary search in it to find the correct value
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row, col, mid;

        // Running BS on rows
        int low = 0, high = rows-1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (matrix[mid][0] == target) {
                return true;
            }
            else if (matrix[mid][0] < target) {
                low = mid + 1;
            }

            else high = mid-1;
        }
        row = (low + high) / 2;

        int l = 0; 
        int h = cols - 1;
        int m;

        while (l <= h) {
            m = (l + h) / 2;
            if (matrix[row][m] == target) {
                return true;
            }
            else if (matrix[row][m] < target) {
                l = m + 1;
            }

            else h = m-1;
        }
        col = m;
        cout << row << ", " << col;
        if (matrix[row][col] == target) return true;
        return false;

    }
};