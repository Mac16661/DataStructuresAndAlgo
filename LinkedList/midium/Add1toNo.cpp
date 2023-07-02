#include "bits/stdc++.h"
using namespace std;

struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }
};

int main() {
    node* head = new node(1);
    node* sec = new node(2);
    node* thr = new node(3);

    head->next = sec;
    sec->next = thr;

    string s;

    while (head!=NULL)
    {
        s.append(to_string(head->data));
        head=head->next;
    }

    int add = stoi(s);
    add++;
    cout<<add<<endl;
    
    return 0;
}