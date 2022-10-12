// Program to print palindromic numbers in a given range.
#include<bits/stdc++.h>
using namespace std;
  
int palindrome(int n) {
    int temp = n, rev = 0;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(n == rev)
        return 1;
    return 0;
}

int main() {
    int min = 100, max = 150;
    for (int i = 100; i < 150; i++) {
        if(palindrome(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}