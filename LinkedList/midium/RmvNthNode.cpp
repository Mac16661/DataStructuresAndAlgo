#include <bits/stdc++.h>
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

void removeLst(node* &head, int n){
        node* temp = head;
        int trav = 0;

        while(temp!=NULL){
            trav++;
            temp=temp->next;
        }

        trav=trav-n;
        temp=head;
        trav--;

        while (trav--)
        {
            temp=temp->next;
        }

        temp->next=temp->next->next;
        
}

int main() {
    node* head= new node(1);
    node* sec = new node(2);
    node* thr = new node(3);
    node* fot = new node(4);
    node* fif = new node(5);
    // node* six = new node(6);
    // node* sev = new node(7);

    head->next= sec;
    sec->next = thr;
    thr->next= fot;
    fot->next = fif;
    // fif->next = six;
    // six->next = sev;

    int n = 2;

    removeLst(head,n);

    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;

    

    return 0;
}