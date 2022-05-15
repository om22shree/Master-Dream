#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node *next;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
};