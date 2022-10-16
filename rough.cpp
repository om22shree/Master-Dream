#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    next_permutation(v.begin(), v.end());
    for(auto it : v) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}