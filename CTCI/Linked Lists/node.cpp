#include<bits/stdc++.h>
using namespace std;


class Node {
public:    
    int data;
    Node *next;
    Node() { next = NULL; }
    Node(int d) {
        data = d;
        next = NULL;
    } 
};


class LL {
public:
    Node *head;
    LL() { head = NULL; }
    void push(int d);
    void pop();    
    void print();
    int LLsize();
};

void LL::push(int d) {
    Node *temp = new Node(d);
    if(head == NULL) head = temp;
    else {
        Node *curr = head;
        while(curr->next != NULL) curr = curr->next;
        curr->next = temp;
    }
}

void LL::pop() {
    Node *curr = head;
    if(head == NULL) return;
    else {
        while(curr->next->next != NULL) curr = curr->next;
        curr->next = NULL;
    }
}

void LL::print() {
    if(head == NULL) cout << "Empty list" << endl;
    Node *curr = head;
    while(curr != NULL) {
        cout << curr->data << "-->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int LL::LLsize() {
    if(head == NULL) return 0;
    else {
        int ans = 0;
        Node *temp = head;
        while(temp != NULL) {
            ++ans;
            temp = temp->next;
        }
        return ans;
    }
}


int main() {
    LL *list = new LL(); 
    list->push(1);
    list->push(2);
    list->push(3);
    cout << list->LLsize() << endl;
    list->print();
    list->pop();
    list->pop();
    cout << list->LLsize() << endl;
    list->print();

    return 0;
}