#include<bits/stdc++.h>
using namespace std;

int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    int arr[10] = {12, 35, 28, 65, 11, 43, 89, 100, 77, 37};
    cout << sumArray(arr, 10) << endl;
    return 0;
}