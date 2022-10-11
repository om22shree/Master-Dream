#include<bits/stdc++.h>
using namespace std;

int equi(int *arr, int n) {
    int sum = 0, loc = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    for (int i = 0; i < n; i++) {
        loc += arr[i];
        if(loc == (sum-arr[i])/2)
            return i;
    }
    return -1;
}

int main() {
    int arr[5] = {1, 2, 4, 3, 0};
    cout << equi(arr, 5) << endl;
    return 0;
}