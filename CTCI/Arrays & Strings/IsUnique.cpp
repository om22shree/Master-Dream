#include <bits/stdc++.h>
using namespace std;

bool isUnique(string s) {
    unordered_map<int, string> l;
    for(auto it : s) {
        if(l.count(it) > 0) {
            return false;
        } else {
            l[it] = 1;
        }
    } 
    return true;
}

int main() {
    string s = "abcdefghi";
    bool ans = isUnique(s);
    cout << ans << endl;
    return 0;
}