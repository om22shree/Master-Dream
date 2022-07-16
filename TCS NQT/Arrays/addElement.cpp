#include<bits/stdc++.h>
using namespace std;

void insertPosition(int *arr, int n, int value, int pos){
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
}


int main() {
    int arr[10] = {12, 35, 28, 35, 11, 43, 89, 77, 100};
    insertPosition(arr, 9, 42, 8);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}