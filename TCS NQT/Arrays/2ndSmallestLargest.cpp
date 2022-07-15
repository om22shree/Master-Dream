#include<bits/stdc++.h>
using namespace std;

int small(vector<int> arr) {
    int small = arr[0], small2 = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if(arr[i] < small) {
            small2 = small;
            small = arr[i];
        } else if(arr[i] > small && arr[i] < small2) {
            small2 = arr[i];
        }
    }
    return small2;
}

int large(vector<int> arr) {
    int large = arr[0], large2 = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if(arr[i] > large) {
            large2 = large;
            large = arr[i];
        } else if(arr[i] < large && arr[i] > large2) {
            large2 = arr[i];
        }
    }
    return large2;
}

int main () {
    vector<int> arr = {12, 13, 23, 65, 77, 43, 89, 100, 1, 37};
    cout << small(arr) << "\n" << large(arr) << endl;
    return 0;
}