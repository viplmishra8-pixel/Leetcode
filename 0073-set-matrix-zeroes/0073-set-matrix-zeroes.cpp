#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, int j, int n, int m, vector<vector<int>>& matrix) {
        for (int col = 0; col < m; col++) {
            matrix[i][col] = 0;
        }
        for (int row = 0; row < n; row++) {
            matrix[row][j] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();      
        int m = matrix[0].size();   
        vector<pair<int,int>> zeros;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        for (auto &p : zeros) {
            solve(p.first, p.second, n, m, matrix);
        }
    }
};