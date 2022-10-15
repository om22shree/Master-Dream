// Find the indices of 2 numbers in an array that sum upto a given target.
/*
Logic :-
    create a hashmap<int, int> ~ hash[element, index];
    one loop for elements in vector :
        if target - element in map :
            return element_index, map[target - element];
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
        int x = target - nums[i];
        if (m.find(x) != m.end()) {
            return {i, m[x]};
        }
        m[nums[i]] = i;
    }
    return {};
}