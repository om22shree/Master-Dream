#include<bits/stdc++.h>
using namespace std;

class Result {
public:
    Node tail;
    int size;
    Result(Node tail, int size) {
        this->tail = tail;
        this->size = size;
    }
};

Result* getTailandSize(Node list) {
    if(list == NULL) {
        Result x = new Result(NULL, 0);

        return x;
    }

    int size = 1;
    Node current = list;
    
    while(current.next != NULL) {
        size++;
        current = current.next;
    }

    Result* x = new Result(current, size);

    return x;
}

Result* getKthNode(Node* head, int size) {
    Node *current = head;
    while(size > 0 && current != NULL) {
        current = current->next;
        k--;
    }

    return current;
}

Node findIntersection(Node list1, Node list2) {
    if(list1 == NULL || list2 == NULL)
        return NULL;

    Result* result1 = getTailandSize(list1);
    Result* result2 = getTailandSize(list2);

    if(result1 != result2)
        return NULL;

    Node shorter = result1->size < result2->size ? list1 : list2;
    Node longer = result1->size < result2->size ? list2 : list1;

    longer = getKthNode(longer, result1->size - result2->size);

    while(shorter != longer) {
        shorter = shorter.next;
        longer = longer.next;
    }

    return longer;
}



