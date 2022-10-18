// Return the pairs if (i < j && nums[i] > 2*nums[j]);
/*
Logic :-
    Use divide and conquer algorithm.
    replace the merge function with countFunction. 
    Update a global count variable in every subarray.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count;

void checkCount(vector<int> &nums, int start, int mid, int end) {
    int l = start, r = mid + 1;
    while (l <= mid && r <= end) {
        if ((long)nums[l] > (long)2 * nums[r]) {
            count += (mid - l + 1);
            r++;
        }
        else {
            l++;
        }
    }
    sort(nums.begin() + start, nums.begin() + end + 1);
    return;
   }

void mergeSort(vector<int>& nums, int start, int end){
        if(start == end) return;        
        int mid = (start + end)/2;
        mergeSort(nums,start, mid);
        mergeSort(nums,mid+1,end);
        checkCount(nums,start,mid,end);
        return;
    }

int reversePairs(vector<int>& nums) {
    if(!nums.size())return 0;
    count = 0;
    mergeSort(nums,0,nums.size()-1);
    return count;
}
};