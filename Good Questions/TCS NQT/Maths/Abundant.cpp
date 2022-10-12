#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(n / i == i)
                sum += i;
            else {
                sum += i;
                sum += n / i;
            }
        }
    }
    sum -= n;
    if(sum > n)
        cout << "Abundant number" << endl;
    else
        cout << "Number is not so abundant" << endl;
    return 0;
}