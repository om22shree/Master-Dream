// Largest contiguous subarray sum.
#include<bits/stdc++.h>
using namespace std;

int maxSum(int *arr, int n) {
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr[i];
        if(ans > sum)
            sum = ans;
        if(ans < 0)
            ans = 0;
    }
    return sum;
}

int main() {
    int arr[7] = {1, 2, -3, 4, -5, -6, 7};
    cout << maxSum(arr, 7) << endl;
    return 0;
}