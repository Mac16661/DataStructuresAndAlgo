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
};

void insertNode(node* &head, int val) {

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

node* reverse(node* ptr) {
    node* pre=NULL;
    node* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}

bool isPalindrome(node* head) {
    if(head==NULL||head->next==NULL) return true;
        
    node* slow = head;
    node* fast = head;
        
    while(fast->next!=NULL&&fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy->data != slow->data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}

int main() {
    node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 3);
    insertNode(head, 2);
    insertNode(head, 1);

    cout<<isPalindrome(head);
 
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };


// node* reverse(node* ptr) {
//     node* pre=NULL;
//     node* nex=NULL;
//     while(ptr!=NULL) {
//         nex = ptr->next;
//         ptr->next = pre;
//         pre=ptr;
//         ptr=nex;
//     }
//     return pre;
// }

// bool isPalindrome(node* head) {
//     if(head==NULL||head->next==NULL) return true;
        
//     node* slow = head;
//     node* fast = head;
        
//     while(fast->next!=NULL&&fast->next->next!=NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
        
//     slow->next = reverse(slow->next);
//     slow = slow->next;
//     node* dummy = head;
        
//     while(slow!=NULL) {
//         if(dummy->data != slow->data) return false;
//         dummy = dummy->next;
//         slow = slow->next;
//     }
//     return true;
// }


// int main() {
//     node* head = new node(1);
//     node* sec = new node(2);
//     node* thr = new node(3);
//     node* fot = new node(3);
//     node* fif = new node(2);
//     node* six = new node(1);

//     head->next = sec;
//     sec->next = thr;
//     thr->next = fot;
//     fot->next = fif;
//     fif->next = six;
//     six->next = NULL;

//     cout<<isPalindrome(head);

//     return 0;
// }