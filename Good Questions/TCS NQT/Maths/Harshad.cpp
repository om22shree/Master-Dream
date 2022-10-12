// Number % sum_of_digits == 0;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int temp = n;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if(n % sum == 0)
        cout << "Harshad" << endl;
    else
        cout << "Not Harshad" << endl;
    return 0;
}