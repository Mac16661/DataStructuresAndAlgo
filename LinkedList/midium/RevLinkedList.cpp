#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void rev(node* &head){
    node* prev_p = NULL;
    node* current_p = head;
    node* next_p;

    while(current_p){
        next_p = current_p->next;
        current_p->next = prev_p;

        prev_p=current_p;
        current_p=next_p;
    }

    head=prev_p;

    node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    rev(head);

    return 0;
}