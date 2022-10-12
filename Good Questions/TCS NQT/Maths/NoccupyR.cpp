// In how many permutations can 'p' people occupy 'r' seats.
// Formula is : p*(p-1)*(p-2).......... * (p-r+1).
#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, r;
    cin >> p >> r;
    int ans = 1;
    for (int i = p; i >= p-r+1; i--) {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}