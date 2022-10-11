// Sort elements in the order of their frequency. 
#include<bits/stdc++.h>
using namespace std;

bool sortEle(pair<int, int>a, pair<int, int>b) {
    return a.second >= b.second;
}

void FreqSort(int *arr, int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if(mp.find(arr[i]) == mp.end())
            mp[arr[i]] = 1;
        mp[arr[i]]++;
    }
    vector<pair<int, int>> v;
    for (auto it : mp)
        v.push_back({it.first, it.second});
    sort(v.begin(), v.end(), sortEle);
    for(auto it : v)
        cout << it.first << " ";
    cout << endl;
}

int main() {
    int arr[10] = {12, 13, 12, 11, 13, 11, 15, 16, 15, 13};
    FreqSort(arr, 10);

    return 0;
}