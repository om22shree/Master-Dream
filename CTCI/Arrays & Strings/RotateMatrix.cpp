#include <bits/stdc++.h>
using namespace std;

bool rotateMatrix(vector<vector<int>> &arr) {
    if(arr.size() == 0 || arr.size() != arr[0].size()) return false;
    int n = arr.size();
    for(int layer = 0; layer < n/2; layer++) {
        int first = layer;
        int last = n - 1 - layer;
        
        for(int i=first; i<last; i++) {
            int offset = i - first;
            int top = arr[first][i];
            // left -> top
            arr[first][i] = arr[last-offset][first];
            // bottom -> left
            arr[last-offset][first] = arr[last][last-offset];
            // right -> bottom
            arr[last][last-offset] = arr[i][last];
            // top -> right
            arr[i][last] = top;
        }
    }
    return true;
}


int main() {
    int n = 4;
    vector<vector<int>> arr = 
    {{1, 2, 3, 4}, 
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}};
    
    bool ans = rotateMatrix(arr);
    cout << ans << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}