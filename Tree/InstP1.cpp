#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* createNode(int val){
    node* root = new node(val);
    return root;
}

node* inst(node* root, int val){
    if(root==NULL){
        root = createNode(val);
        return root;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* temp= q.front();
        q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }else{
            temp->left = createNode(val);
            return root;
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }else{
            temp->right = createNode(val);
            return root;
        }

    }

    return root;
}

void inorder(node* temp){
    if(temp==NULL) return;

    
    inorder(temp->left);
    cout<<temp->data;
    inorder(temp->right);
}

int main() {

    node* root = NULL;
    root=inst(root,1);
    root=inst(root,2);
    root=inst(root,3);
    root=inst(root,4);
    root=inst(root,5);
    root=inst(root,6);
    root=inst(root,7);

    inorder(root);

    return 0;
}