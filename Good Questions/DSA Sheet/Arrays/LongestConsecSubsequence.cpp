// Find the longest consecutive sewuence in an array.
/*
Logic :-
    Insert elements of the array into a hashset and then find arr[i]+1 and arr[i]-1.
*/
#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0 ){
        return 0;
    }
    sort(nums.begin(),nums.end());    
    int ans = 1;
    int prev = nums[0];
    int cur = 1;    
    for(int i = 1; i < nums.size();i++){
        if(nums[i] == prev+1){
            cur++;
        }
        else if(nums[i] != prev){
            cur = 1;
        }
        prev = nums[i];
        ans = max(ans, cur);
    }
    return ans;
} 