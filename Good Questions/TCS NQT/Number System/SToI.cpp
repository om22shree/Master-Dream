#include<bits/stdc++.h>
using namespace std;

void iToOct(int n) {
    int arr[100];
    int i = 0;
    while(n != 0) {
        arr[i] = n%8;
        n /= 8;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
        cout << arr[j];
    cout << endl;
}

void iToBin(int n) {
    int flag = 0;
    for (int i = 32; i >= 0; i--) {
        if((n >> i) & 1) {
            flag = 1;
            cout << 1;
        }  
        else
            if(flag == 1)
                cout << 0;
    }
    cout << endl;
}

int main() {
    string s = "1234";
    int n = stoi(s);
    cout << "Binary to integer: " << stoi(s, 0, 2) << endl;
    cout << "Integer to octal: ";
    iToOct(n);
    cout << "Integer to binary: ";
    iToBin(n);
    return 0;
}