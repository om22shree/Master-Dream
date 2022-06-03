#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

string uniqueChar (string str) {
    string answer;
    unordered_set<char> charSet;
    
    for (char ch: str) {
        if (charSet.find(ch) == charSet.end()) {
            answer.push_back(ch);
            charSet.insert(ch);
        }
    }
    
    return answer;
}