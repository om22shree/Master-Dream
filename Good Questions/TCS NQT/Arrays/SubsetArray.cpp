// Check whether arr1 is a subset of arr2.
#include<bits/stdc++.h>
using namespace std;

bool subSet(int *arr1, int m, int *arr2, int n) {
    if(m > n)
        return false;
    unordered_map<int, bool> mp;
    for (int i = 0; i < n; i++)
        mp[arr2[i]] = true;
    for (int i = 0; i < m; i++)
        if(!mp[arr1[i]]) return false;
    return true;
}

int main() {
    int arr1[5] = {1, 2, 9, 4, 5};
    int arr2[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << subSet(arr1, 5, arr2, 7) << endl;
    return 0;
}