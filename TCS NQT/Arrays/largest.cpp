#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> arr) {
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}

int main () {
    vector<int> arr = {12, 13, 23, 65, 77, 43, 89, 100, 1, 37};
    cout << largest(arr) << endl;
    return 0;
}