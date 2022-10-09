// Frequency of all the elements in the array.
#include<bits/stdc++.h>
using namespace std;

void eleCount(int *arr, int n) {
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        if(m.find(arr[i]) != m.end())
            m[arr[i]]++;
        else
            m[arr[i]] = 1;
    }
    for(auto it : m)
        cout << it.first << " " << it.second << endl;
}

int main() {
    int arr[5] = {1, 2, 1, 2, 3};
    eleCount(arr, 5);
    return 0;
}