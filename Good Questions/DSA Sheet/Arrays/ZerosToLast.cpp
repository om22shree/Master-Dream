// Move all the zeros to the last of array, non-zero elements should have same order.
/*
Logic :-
Traverse the array in one go. if element != 0 : update arr[i++];
insert "arr.size() - i" number of zeros in the end.
*/

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
    for (; j < nums.size(); j++)
        nums[j] = 0;
}