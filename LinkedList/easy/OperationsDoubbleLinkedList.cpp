#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }
};

void insertHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void display(node* head){
    cout<<"PRINTING:  ";
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteNode(node* head,int val){
    node* temp=head;
    while(temp!=NULL && temp->data!=val){
        temp=temp->next;
    }

    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
}

void rev(node* head){
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    head=temp;

    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->prev;
    }
    cout<<"NULL"<<endl;
}


int main() {
    node* head=NULL;

    insertHead(head, 1);
    insertHead(head, 2);
    insertHead(head, 3);
    insertHead(head, 4);
    insertHead(head, 5);
    insertHead(head, 6);

    display(head);
    deleteNode(head,2);
    display(head);

    // rev(head);
    
    return 0;
}