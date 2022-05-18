bool deleteNode(Node *n) {
    if(n == NULL || n->next == NULL) return false;
    Node *next_node = n->next;
    n->data = next_node->data;
    n->next = next_node->next;
    return true;
}

