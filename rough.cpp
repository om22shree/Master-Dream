#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    vector<int> ans;
    int x = it - nums.begin() + 1;
    ans.push_back(x);
    while(nums[x] == target)
        x++;
    ans.push_back(x);
    return ans;
}