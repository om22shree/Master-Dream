// Rearrange the array such that every +ve number is followed by -ve number.
// Do not change the order of numbers.
/*
Logic :-
    Follow the 2-pointer approach.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> ans(nums.size(),0);
    int indexpos = 0, indexneg=1;
    for(auto num: nums){
        if(num>0){
            ans[indexpos] = num;
            indexpos+=2;
        }
        if(num<0){
            ans[indexneg] = num;
            indexneg += 2;
        }
    }
    return ans;       
}