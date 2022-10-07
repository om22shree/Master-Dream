#include<bits/stdc++.h>
using namespace std;
#define n 26

struct Node {
    struct Node *children[n];
    bool isEOW;
};

struct Node* getNode() {
    struct Node *p = new Node;
    p->isEOW = false;
    for (int i = 0; i < n; i++)
        p->children[i] = NULL;
    return p;
}

void insert(struct Node* root, string key) {
    struct Node *p = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!p->children[index])
            p->children[index] = getNode();
        p = p->children[index];
    }
    p->isEOW = true;
}

bool search(struct Node* root, string key) {
    struct Node *p = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!p->children[index])
            return false;
        p = p->children[index];
    }
    return p->isEOW;
}