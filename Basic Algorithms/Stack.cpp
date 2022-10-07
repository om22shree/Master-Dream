#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Size of the stack: " << s.size() << endl;
    s.pop();
    s.pop();
    cout << "Size of stack after popping 2 elements: " << s.size() << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}