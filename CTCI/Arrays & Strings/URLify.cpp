#include <bits/stdc++.h>
using namespace std;

string URLify(string s) {
    string ans;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            ans.push_back('%');
            ans.push_back('2');
            ans.push_back('0');
        } else {
            ans.push_back(s[i]);
        }
    }
    return ans;
}


int main() {
    string s = "ab de cfg h oi";
    cout << URLify(s) << endl;
    return 0;
}