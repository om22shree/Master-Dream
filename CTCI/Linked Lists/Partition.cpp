Node* partition(Node *root, int x) {
    Node *head = root;
    Node *tail = root;

    while(Node != NULL) {
        Node *next = root->next;
        if(next->data < x) {
            root->next = head;
            head = root;
        } else {
            tail->next = root;
            tail = root;
        }
        root = next;
    }
    tail->next = NULL;
    
    return head;
}