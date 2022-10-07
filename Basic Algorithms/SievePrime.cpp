#include<bits/stdc++.h>
#define MaxN 100001
using namespace std;

int spf[MaxN];

void sieve() {
    spf[1] = 1;
    for (int i = 2; i < MaxN; i++) {
        spf[i] = i;
    }
    for (int i = 4; i < MaxN; i+=2) {
        spf[i] = 2;
    }

    for (int i = 3; i * i < MaxN; i++) {
        if(spf[i] == i) {
            for (int j = i * i; j < MaxN; j+=i)
                if(spf[j] == j)
                    spf[j] = i;
        }
    }
}

vector<int> getFactorization(int x) {
    vector<int> ret;
    while(x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

int main() {
    sieve();
    int x = 12246;
    vector<int> p = getFactorization(x);
    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}