#include<bits/stdc++.h>
using namespace std;

string rev(string s) {
    string word = "";
    stack<string> track;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            track.push(word);
            word = "";
            i++;
        }
        word += s[i];
    }
    track.push(word);
    word = "";
    for (int i = track.size(); i > 0; i--) {
        word = word + " " + track.top();
        track.pop();
    }
    return word;
}

int main() {
    string s = "my name is om";
    cout << rev(s) << endl;
    return 0;
}