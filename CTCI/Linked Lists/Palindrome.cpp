#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(Node head) {
    Node fast = head;
    Node slow = head;
    Stack<int> stack = new Stack<int>();

    while(fast != NULL && fast.next != NULL) {
        stack.push(slow.data);
        slow = slow.next;
        fast = fast.next.next;
    }

    if(fast != NULL) {
        slow = slow.next;
    }

    while(slow != NULL) {
        int top = stack.pop().intValue();
        if(top != slow.data) {
            return false;
        }
        slow = slow.next;
    }
    return true;
}