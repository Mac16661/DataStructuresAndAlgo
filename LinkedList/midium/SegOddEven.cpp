#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void deleteHead(node* &head){
    head=head->next;
}

void deleteNode(node* &head, int val) {
    node* temp=head;

    if(head->data==val) {
        deleteHead(head);
        return;
    }

    while(temp->next->data!=val) {
        temp=temp->next;
    }

    temp->next = temp->next->next;
}

void appendList(node* &lastNode, int val){
    node* n = new node(val);

    lastNode->next = n;
    lastNode=n;
}


void detectNode(node* &head, node* &lastNode){
   node* end = lastNode;
   node* temp = head;

   while(temp->next != end){
    int val = temp->data;

    if(val % 2 != 0) {
        deleteNode(head, val);
        appendList(lastNode,val);
    }
    temp=temp->next;
   }
}

int main() {
    node* head = new node(17);
    node* sec = new node(19);
    node* thi = new node(2);
    node* fot = new node(3);
    node* fif = new node(6);
    node* six = new node(8);

    head->next = sec;
    sec->next = thi;
    thi->next = fot;
    fot->next = fif;
    fif->next = six;
    six->next = NULL;

    node* lastNode = head;

    
    while(lastNode->next!=NULL){
        lastNode=lastNode->next;
    }

    detectNode(head,lastNode);

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

    return 0;
}