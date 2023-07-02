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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void deleteVal(node* &head,int val){
    node* temp = head;
    while(temp->next->data != val){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }    
    cout<< "NULL"<<endl;
}

int nodeLength(node* head){
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int searchNodes(node* head, int val){
    node* temp=head;
    int count=1;
    while(temp->data != val && temp!=NULL){
        temp=temp->next;
        count++;
    }

    return count;
}


??TODO: better search approach
bool search(node* head, int x)
{
    node temp = head; 
    while (temp != NULL) {
        if (temp->data == x)
            return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    deleteVal(head,3);
    display(head);
    cout<<nodeLength(head)<<endl;
    cout<<"POS: " <<searchNodes(head,6)<<endl;
    return 0;
}