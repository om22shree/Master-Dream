// Check if strings are anagrams.
#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    map<char, int> m1;
    map<char, int> m2;

    for (int i = 0; i < s1.length(); i++) {
        m1[s1[i]] += 1;
        m2[s2[i]] += 1;
    }

    return (m1 == m2);
}

int main() {
    string s1, s2;
    s1 = "abcdef";
    s2 = "fdceab";
    cout << anagram(s1, s2) << endl;
    return 0;
}