Node KthToLast(Node *head, int k) {
    Node *p1 = head;
    Node *p2 = head;

    for(int i=0; i<k; i++) {
        if(p1 == NULL) return NULL;
        p1 = p1->next;
    }

    while(p1 != NULL) {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p2;
}