#include<bits/stdc++.h>
using namespace std;

void reverse(int *arr, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}


int main () {
    int arr[10] = {12, 13, 23, 65, 77, 43, 89, 100, 1, 37};
    reverse(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}