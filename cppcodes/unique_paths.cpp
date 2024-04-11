// DP question - base case vec[-1][-1] = 1 and 
// vec[i][j] = vec[i+1][j] + vec[i][j+1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> vec(m, vector<int> (n, 0));
        // cout << m << ", " << n;
        for (int i=m-1; i>=0; i--) {
            for (int j=n-1; j >= 0; j--) {
                // cout << i << "," << j;
                if (i == m-1 && j == n-1) vec[i][j] = 1;
                else if (i == m-1) vec[m-1][j] = 1;
                else if (j == n-1) vec[i][n-1] = 1;
                else {
                    vec[i][j] = vec[i][j+1] + vec[i+1][j];
                }
            }
        }
        return vec[0][0];
    }
};