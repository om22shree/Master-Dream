#include <bits/stdc++.h>
using namespace std;

string stringCompression(string s) {
    int consec = 0;
    string ans;
    for(int i=0; i<s.length(); i++) {
        consec++;
        if(s[i] != s[i+1]) {
            ans.push_back(s[i]);
            string c = to_string(consec);
            ans.append(c);
            consec = 0;
        }
    }
    return ans;
}


int main() {
    string s = "abbbbccaaabcddddbbccaaabcd";
    cout << stringCompression(s) << endl;   
    return 0;
}