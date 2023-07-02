// #include<bits/stdc++.h>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };

// void insert(node* &head, int val){
//     node* n = new node(val);
//     n->next=head;
//     head=n;
// }

// node* rev(node* &head){
//     node* prv = NULL; 
//     while(head!=NULL){
//         node* nxt = head->next;
//         head->next = prv;
//         prv=head;
//         head=nxt;
//     }
//     return prv;
// }

// int main() {
//     node* head=NULL;
//     insert(head,1);
//     insert(head,2);
//     insert(head,3);
//     insert(head,4);
//     insert(head,5);

//     head = rev(head);

//     while(head!=NULL){
//         cout<<head->data<<"->";
//         head=head->next;
//     }
//     cout<<"NULL"<<endl;

//     return 0;
// }


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

void insert(node* &head, int data){
    node* n = new node(data);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void printList(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void revList(node* &head){
    node* next;
    node* curr=head;
    node* prev=NULL;

    while(curr){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }

    head=prev;
}

node* recRev(node* &head){
    node* prev=NULL;
    while(head){
        node* next = head->next;
        head->next=prev;

        prev=head;
        head=next;
    }
    head=prev;
    return head;
}

int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);

    printList(head);
    // revList(head);
    head = recRev(head);
    printList(head);
    return 0;
}