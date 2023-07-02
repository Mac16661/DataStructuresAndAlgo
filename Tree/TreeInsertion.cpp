#include "bits/stdc++.h"
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};

node* createNode(int val){
    node* root = new node(val);
    return root;
}

node* levelOrderIns(node* root, int val){
    
    if(root==NULL){
        createNode(val);
        return root;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty())
    {
       node* temp = q.front();
       q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }else{
            temp->left = createNode(val);
            return root;
        }

        if(temp->right){
            q.push(temp->right);
        }else{
            temp->right = createNode(val);
            return root;
        }
    }
    return root;
}

void inorder(node* temp){
    if(temp==NULL) {
        return;
    }

    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main() {
    node* root = createNode(10);
    root->left = createNode(11);
    root->left->left = createNode(7);
    root->right = createNode(9);
    root->right->left = createNode(15);
    root->right->right = createNode(8);

    inorder(root);

    root = levelOrderIns(root,12);
    root = levelOrderIns(root,20);

    inorder(root);

    return 0;
}

