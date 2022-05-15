#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next = NULL;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
};


class LinkedList {
public:
    Node root = new Node();
        
    void push(int d) {
        Node temp = new Node(d);
        root.next = temp;
    }

    int pop() {
        Node *curr = &root;
        while(curr->next->next != NULL) {
            curr = curr->next;
        }
        int ans = curr->data;
        curr->next = NULL;
        return ans;
    }

    int size() {
        int ans = 0;
        Node *curr = &root;
        while(curr != NULL) {
            ans++;
        }
        return ans;
    }

    bool isEmpty() {
        if(root == NULL)
            return true;
        else
            return false;
    }
};

int main() {
    LinkedList ll = new LinkedList();
    ll.push(10);
    ll.push(20);
    ll.push(30);
    cout << ll.size() << endl;
    cout << ll.pop() << endl;
    cout << ll.isEmpty() << endl;

    return 0;
}