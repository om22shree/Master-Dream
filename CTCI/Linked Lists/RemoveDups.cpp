void RemoveDups(Node *head) {
    Node *curr  = head;
    while(curr != NULL) {
        Node *runner = curr;
        while(runner->next != NULL) {
            if(runner->next->data == curr->data) {
                runner->next = runner->next->next;
            } else {
                runner = runner->next;
            }
        }
        curr = curr->next;
    }
}


