#include<bits/stdc++.h>
using namespace std;

void removeDuplicateSorted(int *arr, int n) {
    sort(arr, arr + n);
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    for (int k = 0; k <= i; k++) {
        cout << arr[k] << " ";
    }
}

int main () {
    int arr[10] = {12, 35, 28, 35, 11, 43, 89, 100, 77, 100};
    removeDuplicateSorted(arr, 10);
    return 0;
}