#include<bits/stdc++.h>
using namespace std;

class partialSum {
public:
    Node sum = NULL;
    int carry = 0;
};

Node add(Node l1, Node l2) {
    int len1 = length(l1);
    int len2 = length(l2);

    if(len1 < len2) {
        l1 = padlist(l1, len2 - len1);
    } else {
        l2 = padlist(l2, len1 - len2);
    }

    partialSum sum = addHelper(l1, l2);
    if(sum.carry == 0) {
        return sum.sum;
    } else {
        Node result = insertBefore(sum.sum, sum.carry);
        return result;
    }
}

partialSum addHelper(Node l1, Node l2) {
    if(l1 == NULL && l2 == NULL) {
        partialSum sum = new partialSum();
        return sum;
    }

    partialSum sum = addHelper(l1.next, l2.next);
    int val = sum.carry + l1.data + l2.data;
    Node full_result = insertBefore(sum.sum, val % 10);
    sum.sum = full_result;
    sum.carry = val / 10;
    return sum;
}

Node padlist(Node l, int padding) {
    Node head = l;
    for (int i = 0; i<padding; i++) {
        head = insertBefore(head, 0);
    }
    return head;
}

Node insertBefore(Node list, int data) {
    Node node = new Node(data);
    if(list != NULL) {
        node.next = list;
    }
    return node;
}
