// Basic implementation of a node class;
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node *next = NULL;
    int data;
    Node(int d) {
        data = d;
    }
};


int main() {
    Node *head = new Node(10);
    cout << head->data << endl;
    return 0;
}
