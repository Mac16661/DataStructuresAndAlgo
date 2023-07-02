//TODO: Tortoise-Hare-Approach we will use 2 pointres
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

};

void insert(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* middle(Node* &head){
    Node* fast=head;
    Node* slow=head;

    //WHEN FAST AND FAST->NEXT BOTH EQUALS TO NULL
    while(fast && fast->next){
        slow=slow->next,fast=fast->next->next;
    }
    return slow;
}

int main() {
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    display(head);

    // cout<<middle(head);
    Node* mid=middle(head);

    display(mid);

    return 0;
}