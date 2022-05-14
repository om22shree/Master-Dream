#include <bits/stdc++.h>
using namespace std;

string URLify(string s) {
    string ans;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            ans.append("%20");
        } else {
            ans.append(s[i]);
        }
    }
    return ans;
}


int main() {
    string s = "ab de cfg h oi";
    cout << URLify(s) << endl;
    return 0;
}