#include<bits/stdc++.h>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
};

struct node* newNode(int item) {
    struct node *temp = new struct node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

struct node* insert(struct node* root, int key) {
    if(root == NULL)
        return newNode(key);
    if(key == root->key) {
        return root;
    } else if(key < root->key) {
        root->left = insert(root->left, key);
    } else if(key > root->key) {
        root->right = insert(root->right, key);
    }
    return root;
}

int main() {
    // Trial run
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 40);
    insert(root, 60);
    insert(root, 30);
    insert(root, 20);
    insert(root, 10);
    inorder(root);
    cout << endl;
    return 0;
}