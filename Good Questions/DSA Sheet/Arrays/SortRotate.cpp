// Check if the given array can be attained by rotating a sorted array any number of times.
/*
    Logic :-
        arr = {4, 5, 1, 2, 3};
        arr[i-1] > arr[i] can happen only once if the array is rotated.
        if(arr[i] > arr[arr.size()-1]) this means that array is rotated (max is first).
*/

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    if(nums.size() == 1)
        return true;
    int k = 0;
    for (int i = 1; i < nums.size(); i++) {
        if(nums[i-1] > nums[i]) {
            if(nums[nums.size() - 1] > nums[0])
                return false;
            k++;
        }  
    }
    return k <= 1;
}

int main() {
    vector<int> x = {3, 5, 4, 1, 2};
    cout << check(x) << endl;
}