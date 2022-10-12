// Find the word with maximum repeating characters in a given string.
#include<bits/stdc++.h>
using namespace std;

bool sortEle(pair<string, int>&a, pair<string, int>&b) {
    return a.second < b.second;
}

void maxFreq(string s) {
    vector<string> v;
    string word = "";
    int i = 0;
    for (i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            v.push_back(word);
            word = "";
        }
        word += s[i];
    }
    v.push_back(word);
    vector<pair<string, int>> p;
    int max = 0;
    for(auto it : v) {
        for (int i = 0; i < it.length() - 1; i++) {
            if(it[i] == it[i+1]) {
                max += 1;
            }
        }
        p.push_back({it, max+1});
        max = 0;
    }
    sort(p.begin(), p.end(), sortEle);
    pair<string, int> ans = p.back();
    cout << ans.first << " " << ans.second << endl;
}

int main() {
    string s = "microsoft google trilooogy me aaaand";
    cout << "Here is the solution:-" << endl;
    maxFreq(s);
    return 0;
}