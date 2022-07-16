#include<bits/stdc++.h>
using namespace std;

void increaseDecrease(int *arr, int n) {
    sort(arr, arr+n);
    for (int i = 0; i < n/2; i++) {
        cout << arr[i] << " ";
    }
    for (int i = n-1; i >= n/2; i--) {
        cout << arr[i] << " ";
    }
}


int main () {
    int arr[10] = {12, 35, 28, 65, 11, 43, 89, 100, 77, 37};
    increaseDecrease(arr, 10);
    return 0;
}
