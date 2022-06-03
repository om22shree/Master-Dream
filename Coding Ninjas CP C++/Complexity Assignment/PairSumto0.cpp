#include<bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n) {
	unordered_map<int, int> m;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (m.find(0 - arr[i]) != m.end()) {
            count += m[0 - arr[i]];
        }
        m[arr[i]]++;
    }
    
    return count;
    
}