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