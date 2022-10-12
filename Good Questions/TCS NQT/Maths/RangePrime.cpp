#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    int i = 2;
    if(n == 1)
        return false;
    for (i = 2; i <= sqrt(n); i++)
    {
        if(sqrt(n) == i)
            return false;
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int min = 12, max = 120;
    for (int i = min; i < max; i++) {
        if(prime(i))
            cout << i << " ";
    }
    return 0;
}