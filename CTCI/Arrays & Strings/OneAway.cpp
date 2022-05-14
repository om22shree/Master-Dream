#include <bits/stdc++.h>
using namespace std;

bool OneReplace(string s1, string s2) {
    int rep = 0;
    for(int i=0; i<s2.length(); i++) {
        if(s1[i] != s2[i]) rep++;
    }
    return rep <= 1;
}

bool OneInsert(string s1, string s2) {
    int ins = 0;
    for(int i=0; i<s1.size(); i++) {
        if(s2.find(s1[i]) == string::npos) ins++;
    }
    return ins == 0;
}

bool OneAway(string s1, string s2) {
    if(s1.length() == s2.length()) return OneReplace(s1, s2);
    if(s1.length() - 1 == s2.length()) return OneInsert(s2, s1);
    if(s1.length() == s2.length() - 1) return OneInsert(s1, s2);
}

int main() {
    string s1 = "abcd";
    string s2 = "afbcd";
    cout << OneAway(s1, s2) << endl;
    return 0;
}