#include<bits/stdc++.h>
using namespace std;

Node findBegin(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }

    if(fast == NULL || fast-.next == NULL)
        return NULL;

    slow = head;

    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return fast;
}