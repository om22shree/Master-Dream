#include<bits/stdc++.h>
using namespace std;

int averageArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum/n;
}

int main () {
    int arr[10] = {12, 35, 28, 65, 11, 43, 89, 100, 77, 37};
    cout << averageArray(arr, 10) << endl;
    return 0;
}