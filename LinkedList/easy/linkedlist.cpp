#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val) {

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next=n;

}

void insertAtIndex(node* &head,int val, int index) {
    if(head==NULL){
        cout<<"head not available"<<endl;
        return;
    }
    node* n = new node(val);

    node* temp = head;
    int i = 1;
    while(i < index) {
        i++;
        temp=temp->next;
    } 
    n->next = temp->next;
    temp->next= n;
    
}

void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}

void deleteHead(node* &head){
    head=head->next;
}

void deleteNode(node* &head, int val) {
    node* temp = head;

    if(head->data==val) {
        deleteHead(head);
        return;
    }

    while(temp->next->data!=val) {
        temp=temp->next;
    }

    temp->next = temp->next->next;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    insertAtHead(head,0);

    insertAtIndex(head,10,2);

    display(head);

    deleteNode(head,0);
    cout<<"After deletion"<<endl;
    display(head);

    return 0;
}