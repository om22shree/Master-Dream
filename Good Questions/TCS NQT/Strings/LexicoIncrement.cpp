#include<bits/stdc++.h>
using namespace std;

string lexInc(string s) {
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'z')
            s[i] = 'a';
        else
            s[i]++;
    }
    return s;
}

int main() {
    string s = "afsfz";
    s = lexInc(s);
    cout << s << endl;
    return 0;
}