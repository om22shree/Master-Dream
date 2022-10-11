#include<bits/stdc++.h>
using namespace std;

void RS(int *arr, int n) {
    int brr[n];
    for (int i = 0; i < n; i++) {
        brr[i] = arr[i];
    }
    int temp = 0;
    sort(brr, brr + n);
    map<int, int> mp;
    for(auto it : brr) {
        if(mp[it] == 0) {
            mp[it] = temp++;
        }
    }
    for(int i=0; i < n; i++) {
        cout << mp[arr[i]] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {11, 12, 6, 9, 3, 2, 5, 1};
    RS(arr, 8);
    return 0;
}