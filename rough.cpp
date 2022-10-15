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

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int target = 7;
    vector<int> ans = twoSum(nums, target);
    for(auto it : ans)
        cout << ans[it] << " ";
    cout << endl;
    return 0;
}