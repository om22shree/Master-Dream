#include<bits/stdc++.h>
using namespace std;

int median(int *arr, int n) {
    sort(arr, arr + n);
    if(n%2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        return arr[n / 2];
}

int main() {
    int arr[10] = {12, 35, 28, 65, 11, 43, 89, 100, 77, 37};
    cout << median(arr, 10) << endl;
    return 0;
}