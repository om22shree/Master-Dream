// Print unique values of an array.
#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int *arr, int n) {
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for(auto it : s)
        cout << it << " ";
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 2, 1, 4, 5, 6, 4, 7};
    removeDuplicates(arr, 10);
    return 0;
}