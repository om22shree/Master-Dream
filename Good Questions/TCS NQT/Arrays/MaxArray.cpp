// Maximum value in the array, follow same approach for sum, minimum of array;
#include <bits/stdc++.h>
using namespace std;

int max(int *arr, int n) {
    if(n == 0)
        return 0;
    return arr[0] > max(arr + 1, n - 1) ? arr[0] : max(arr + 1, n - 1);
}

int main() {
    int arr[5] = {1, 4, 2, 6, 3};
    cout << max(arr, 5) << endl;
    return 0;
}