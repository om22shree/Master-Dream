#include<bits/stdc++.h>
using namespace std;

void rev(int *arr, int s, int e) {
    while(s <= e) {
        int temp = arr[s];
        arr[s++] = arr[e];
        arr[e--] = temp;
    }
}

void rotate(int *arr, int n, int k) {
    rev(arr, n - k, n - 1);
    rev(arr, 0, n - k - 1);
    rev(arr, 0, n - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, 5, 2);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}