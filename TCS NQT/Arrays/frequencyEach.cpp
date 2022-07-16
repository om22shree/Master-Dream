#include<bits/stdc++.h>
using namespace std;

void countFreq(int *arr, int n) {
    unordered_map<int, int> f;
    for (int i = 0; i < n; i++) {
            f[arr[i]]++;
    }

    for(auto i : f) {
        cout << i.first << "  " << i.second << endl;
    }
}

int main () {
    int arr[10] = {12, 100, 100, 65, 77, 43, 89, 100, 77, 37};
    countFreq(arr, 10);
    return 0;
}

