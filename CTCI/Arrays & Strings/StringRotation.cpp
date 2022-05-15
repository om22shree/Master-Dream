#include <bits/stdc++.h>
using namespace std;

bool stringRotation(string s1, string s2) {
    string sf = s1 + s1;
    if(sf.find(s2, 0) != string::npos) {
        return true;
    } else {
        return false;
    }
}


int main() {
    string s1 = "omshree";
    string s2 = "shreeom";
    bool ans = stringRotation(s1, s2);
    cout << ans << endl;
    return 0;
}