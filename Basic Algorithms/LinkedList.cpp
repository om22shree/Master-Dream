#include<bits/stdc++.h>
using namespace std;

void showList(list<int> v) {
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // Create 2 lists
    list<int> v1;
    list<int> v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i * 2);
        v2.push_back(i * 3);
    }
    // Show 2 lists
    cout << "List 1: ";
    showList(v1);
    cout << "List 2: ";
    showList(v2);
    // Show the list after popping elements
    cout << "Pop part:- " << endl;
    v1.pop_back();
    v2.pop_front();
    showList(v1);
    showList(v2);
    // Reverse and print the 2 lists
    cout << "reverse part:- " << endl;
    v1.reverse();
    v2.reverse();
    showList(v1);
    showList(v2);
    // Sort and the print the lists
    cout << "sort part:- " << endl;
    v1.sort();
    v2.sort();
    showList(v1);
    showList(v2);
    // Merge two lists
    v1.merge(v2);
    showList(v1);
    return 0;
}