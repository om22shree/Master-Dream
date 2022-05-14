#include <bits/stdc++.h>
using namespace std;

bool checkPermutation(string s1, string s2) {
    if(s1.size() != s2.size()) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 != s2) return false;
    return true;
}


int main() {
    string s1 = "abcdefghi";
    string s2 = "agbdhifce";
    bool ans = checkPermutation(s1, s2);
    cout << ans << endl;
    return 0;
}