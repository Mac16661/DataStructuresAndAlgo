#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int key;
    Node* left;
    Node* right;
};


Node* newNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = node->right = NULL;
    return node;
}


int maximum(Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root->key;
}


Node* inorderPre(Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}


Node* insert(Node* root, int key) {
    if (root == NULL) {
        return newNode(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

Node* deleteN(Node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->key) {
        root->left = deleteN(root->left, key);
    } else if (key > root->key) {
        root->right = deleteN(root->right, key);
    } else {
       
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

      
        Node* temp = inorderPre(root->left);
        root->key = temp->key;
        root->left = deleteN(root->left, temp->key);
    }

    return root;
}

int main() {
    Node* root = NULL;
    root = insert(root, 570);
    root = insert(root, 930);
    root = insert(root, 6520);
    root = insert(root, 470);
    root = insert(root, 760);
    root = insert(root, 620);
    root = insert(root, 230);

    cout << "maximum element  " << maximum(root) << endl;

    root = deleteN(root, 620);
    root = deleteN(root, 230);
    root = deleteN(root, 6520);

    cout << "maximum element after deletion operation  " << maximum(root) << endl;

    return 0;
}