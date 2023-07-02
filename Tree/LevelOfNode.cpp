#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

void createNode(node* &root,int val){
    root = new node(val);
}

void instNode(node* &root, int val){
    if(root==NULL){
        createNode(root,val);
        return;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node* temp=q.front();
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }else{
            createNode(temp->left,val);
            return;
        }

        if(temp->right!=NULL){
            q.push(temp->right);
        }else{
            createNode(temp->right,val);
            return;
        }
        
    }
}


void levelOFNode(node* root,int val){
    queue<node*>q;
    q.push(root);
    int count=0;

    while(!q.empty()){
        count++;
        node* temp = q.front();

        if(temp->data==val){
            cout<<count;
            return;
        }

        q.pop();

        if(temp->left->data!=val){
            q.push(temp->left);
        }else{
            cout<<count<<endl;
            return;
        }

        if(temp->right->data!=val){
            q.push(temp->right);
        }else{
            cout<<count<<endl;
            return;
        }
    }
}


void inorder(node* root){
    if(root==NULL){
        return;
    };

    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

int main() {
    node* root = NULL;
    instNode(root,3);
    instNode(root,4);
    instNode(root,5);
    instNode(root,6);
    instNode(root,7);
    instNode(root,8);
    instNode(root,9);


    // inorder(root);

    levelOFNode(root,3);

    cout<<endl;

    return 0;
}