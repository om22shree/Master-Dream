#include<bits/stdc++.h>
using namespace std;

void nullRow(vector<vector<int>> &arr, int row) {
    for (int j = 0; j < arr[0].size(); j++) {
        arr[row][j] = 0;
    }
}

void nullCol(vector<vector<int>> &arr, int col) {
    for (int i = 0; i < arr.size(); i++) {
        arr[i][col] = 0;
    }
}

void zeroMatrix(vector<vector<int>> &arr) {
    bool rowZero = false, colZero = false;
    for (int j = 0; j < arr[0].size(); j++) {
        if(arr[0][j] == 0) {
            rowZero = true;
            break;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        if(arr[i][0] == 0) {
            colZero = true;
            break;
        }
    }

    for (int i = 1; i < arr.size(); i++) {
        for (int j = 1; j < arr[0].size(); j++) {
            if(arr[i][j] == 0) {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < arr.size(); i++) {
        if(arr[i][0] == 0)
            nullRow(arr, i);
    }

    for (int j = 1; j < arr[0].size(); j++) {
        if(arr[0][j] == 0)
            nullCol(arr, j);
    }   

    if(rowZero)
        nullRow(arr, 0);
    if(colZero)
        nullCol(arr, 0);
}


int main() {
    vector<vector<int>> arr = 
    {{0, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 0, 11, 10},
    {13, 14, 0, 16}};

    zeroMatrix(arr);
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}