#include <bits/stdc++.h>
using namespace std;

bool palindromePermutation(string s) {
    int conflict = 0;
    unordered_map<char, int> l;
    for(int i=0; i<s.size(); i++) {
        l[s[i]]++;
    }
    for(auto it = l.begin(); it != l.end(); ++it) {
        if(it->second % 2 == 1) {
            conflict++;
        }
    }
    return (conflict <= 1);
}


int main() {
    string s = "acbabcd";
    cout << palindromePermutation(s) << endl;
    return 0;
}