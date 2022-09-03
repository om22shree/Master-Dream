#include<bits/stdc++.h>
using namespace std;

int bs(int *arr, int x, int l, int r) {
    if(r < l) {
        return -1;
    } else {
        int m = (r+l) / 2;
        if(arr[m] == x) {
            return m;
        } else if(arr[m] < x) {
            bs(arr, x, m + 1, r);
        } else {
            bs(arr, x, l, m-1);
        }
    }
}
