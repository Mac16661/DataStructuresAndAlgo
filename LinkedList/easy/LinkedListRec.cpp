#include "bits/stdc++.h"
using namespace std;

struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

    void printRec(node* head){
        if(head==NULL){
            return;
        }

        printRec(head->next);
        printf("%d  ", head->data);
    }
};

int main() {
    node* head = new node(2);
    node* sec = new node(4);
    node* thr = new node(3);

    head->next = sec;
    sec->next = thr;

    head->printRec(head);
    return 0;
}