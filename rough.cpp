#include<bits/stdc++.h>
using namespace std;

void bswap(int *arr, int n, int k) {
    vector<int> a, b;
    for (int i = 0; i < k; i++) {
        a.push_back(arr[i]);
    }
    for (int i = k; i < n; i++) {
        b.push_back(arr[i]);
    }

    vector<int> ans;
    for(auto it : b)
        ans.push_back(it);
    for(auto it : a)
        ans.push_back(it);

    for(auto it : ans)
        cout << it << " ";
    cout << endl;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    bswap(arr, 7, 3);
    return 0;
}