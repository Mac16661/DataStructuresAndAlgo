#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

//insertAtHead
void insertHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    
    head=n;
}

//insertAtTail
void insertTail(node* &head, int val) {
    

    if(head==NULL){
        insertHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
    n->prev=temp;
}

//insert before node
void insertBeforeNum(node* &head, int val,int ind){
    node* n = new node(val);

    if(head==NULL){
        head=n;
    }

    node* temp = head;

    while(temp->next->data!=ind) {
        temp=temp->next;
    }
    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}

//insert after node
void insertAfterNode(node* &head,int val, int ind){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->data != ind){
        temp=temp->next;
    }
    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}


//Traversing
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//reverse travesing
void displayRev(node* &head){
    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    while(temp!=NULL){
        cout<<temp->data<<"<-";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head){
    head=head->next;
    head->prev= NULL;
}

//deletion
void deletion(node* &head, int val){
    node* temp = head;
    int count=1;

    if(val==1){
        deleteAtHead(head);
        return;
    }

    while(temp!=NULL && count!=val){
        temp=temp->next;
        count++;
    }

    //If we are deleting at last node
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    
    temp->prev->next=temp->next;

    delete temp;
}

int main(){
    node* head=NULL;

    insertHead(head,2);
    insertHead(head,1);

    insertTail(head,3);
    insertTail(head,4);

    insertBeforeNum(head,10,2);
    insertAfterNode(head,11,2);
    
    display(head);

    // cout<<"after deletion   "<<endl;
    // deletion(head,3);
    // deletion(head,1);
    // // display(head);

    displayRev(head);
    
    return 0;
}