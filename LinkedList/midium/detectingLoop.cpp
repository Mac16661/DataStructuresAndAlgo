// #include<bits/stdc++.h>
// using namespace std;

// class node {
//     public:
//         int num;
//         node* next;
//         node(int val) {
//             num = val;
//             next = NULL;
//         }
// };

// //utility function to insert node in the list
// void insertNode(node* &head,int val) {
//     node* newNode = new node(val);
    
//     if(head == NULL) {
//         head = newNode;
//         return;
//     }
    
//     node* temp = head;
//     while(temp->next != NULL) temp = temp->next;
    
//     temp->next = newNode;
//     return;
// }

// //utility function to create cycle
// void createCycle(node* &head,int a,int b) {
//     int cnta = 0,cntb = 0;
//     node* p1 = head;
//     node* p2 = head;
//     while(cnta != a || cntb != b) {
//         if(cnta != a) p1 = p1->next, ++cnta;
//         if(cntb != b) p2 = p2->next, ++cntb;
//     }
//     p2->next = p1;
// }

// //utility function to detect cycle
// bool cycleDetect(node* head) {
//     if(head == NULL) return false;
//     node* fast = head;
//     node* slow = head;
        
//     while(fast->next != NULL && fast->next->next != NULL) {
//         fast = fast->next->next;
//         slow = slow->next;
//         if(fast == slow) {
//             cout<<slow->num<<endl;
//             return true;
//         }
//     }
//     return false;
// }


// int main() {
//     node* head = NULL;
//     insertNode(head,1);
//     insertNode(head,2);
//     insertNode(head,3);
//     insertNode(head,4);
//     insertNode(head,5);
//     createCycle(head,2,4);//creating cycle in the list
//     if(cycleDetect(head) == true)
//     cout<<"Cycle detected\n";
//     else
//     cout<<"Cycle not detected\n";
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

void detectLoop(node* head){
    node* fast=head;
    node* slow=head;

    while(fast->next!=NULL && fast->next->next!=NULL ){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            cout<<"true"<<endl;
            return;
        }
    }

    cout<<"False"<<endl;
    return;
};

void detectingNode(node* &head){
    node* fast=head;
    node* slow=head;

    while(fast->next!=NULL && fast->next->next!=NULL ){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            slow=head;

            while(fast->next!=slow->next){
                fast=fast->next;
                slow=slow->next;
            }

            //TODO: removing loop
            
            cout<<fast->next->data<<endl;
            fast->next=NULL;
            return;
        }
    }
}

void countNode(node* slow){
    int count=1;
    node* temp=slow;
    while(temp->next!=slow){
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
}

void LengthNode(node* &head){
    node* fast=head;
    node* slow=head;
    int count=0;

    while(fast->next!=NULL && fast->next->next!=NULL ){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow){
            countNode(slow);
            return;
        }
    }
}

int main() {
    node* head = new node(1);
    node* sec = new node(2);
    node* thr = new node(3);
    node* fot = new node(4);
    node* fif = new node(5);
    node* six = new node(6);

    head->next = sec;
    sec->next = thr;
    thr->next = fot;
    fot->next = fif;
    fif->next = six;
    six->next = thr;

    detectLoop(head);
    
    LengthNode(head);

    detectingNode(head);

    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}