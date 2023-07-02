#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }

    void insertAtHead(node* &head, int data){
        node* n = new node(data);
        if(head==NULL){
            head=n;
            return;
        }

        n->next=head;
        head=n;
    }

    void printList(node* head){
        while(head){
            cout<<head->data<<"->";
            head=head->next;
        }
    }

    void DltMid(node* &head){
        node* fast=head;
        node* slow=head;
        node* prev=NULL;

        while(fast->next && fast){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        prev->next=prev->next->next;
    }
};



int main() {
    node* head = NULL;
    head->insertAtHead(head,1);
    head->insertAtHead(head,2);
    head->insertAtHead(head,3);
    head->insertAtHead(head,4);
    head->insertAtHead(head,5);
    

    head->printList(head);

    head->DltMid(head);
    cout<<endl;
    head->printList(head);


    return 0;
}