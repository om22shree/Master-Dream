#include<bits/stdc++.h>
using namespace std;

int equi(int *arr, int n) {
    int ls = 0;
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];
    int rs = totalSum;
    for (int i = 0; i < n; i++) {
        rs -= arr[i];
        if(ls == rs)
            return i;
        ls += arr[i];
    }
    return -1;
}

int main() {
    int arr[5] = {1, 2, 4, 3, 0};
    cout << equi(arr, 5) << endl;
    return 0;
}