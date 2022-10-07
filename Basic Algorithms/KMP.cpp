#include<bits/stdc++.h>
using namespace std;

void lps_func(string txt, vector<int>& lps) {
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while(i < txt.length()) {
        if(txt[i] == txt[len]) {
            len++;
            lps[i] = len;
            i++;
            continue;
        } else {
            if(len == 0) {
                lps[i] = 0;
                i++;
                continue;
            } else {
                len = lps[len - 1];
                continue;
            }
        }
    }
}

void kmp(string pattern, string txt) {
    int n = txt.length();
    int m = pattern.length();
    vector<int> lps(m);
    lps_func(pattern, lps);
    int i = 0, j = 0;
    while(i < n) {
        if(pattern[j] == txt[i]) {
            i++;
            j++;
        }
        if(j == m) {
            cout << i - m << " ";
            j = lps[j - 1];
        } else if (i < n && pattern[j] != txt[i]) {
            if(j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }
}