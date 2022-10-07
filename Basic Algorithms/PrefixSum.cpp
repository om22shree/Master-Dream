#include<bits/stdc++.h>
using namespace std;

void prefixSum(int *arr, int n, int *prefixArray) {
    prefixArray[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixArray[i] = prefixArray[i - 1] + arr[i];
    }
}

int main() {
    int n = 5;
    int arr[n] = {12, 10, 6, 82, 45};
    int prefixArray[n];
    prefixSum(arr, n, prefixArray);
    cout << "The array is: ";
    for(auto it : arr)
        cout << it << " ";
    cout << endl;
    cout << "The array containing prefixSum is: ";
    for(auto it : prefixArray)
        cout << it << " ";
    cout << endl;
}