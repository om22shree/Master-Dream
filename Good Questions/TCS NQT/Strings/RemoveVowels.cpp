#include<bits/stdc++.h>
using namespace std;

string remVowels(string s) {
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }
    return s;
}

int main() {
    string s = "klksfaeiousdkj";
    s = remVowels(s);
    cout << s << endl;
    return 0;
}