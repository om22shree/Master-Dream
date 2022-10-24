// Remove useless parenthesis from a given string consisting of braces.


#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string S) {
    string ans;
    stack<char> s;
    for(auto c : S) {
        if(c == '(') s.push(c);
        if(s.size() > 1) ans += c;
        if(c == ')') s.pop();
    }
    return ans;
}