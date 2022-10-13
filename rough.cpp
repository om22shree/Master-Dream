#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 1; i < m; i++) {
        if(matrix[i][0] == target || matrix[i][n-1] == target)
            return true;
        else if(matrix[i][0] > target) {
            for (int j = 0; j < n; j++) {
                if(matrix[i-1][j] == target)
                    return true;
            }
            return false;
        }
        else {
            for (int i = 0; i < n - 1; i++) {
                if(matrix[0][i] ==  target)
                    return true;
            }
            return false;
        }
    }
}