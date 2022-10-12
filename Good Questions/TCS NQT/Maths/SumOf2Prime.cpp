// Check if a number can be respresented as sum of 2 primes or not. 
// return if(prime(n) && prime(n-2))
#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if(n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

bool SPrime(int n) {
    if(prime(n) && prime(n-2))
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    if(SPrime(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}