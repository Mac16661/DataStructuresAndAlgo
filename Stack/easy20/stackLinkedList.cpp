//TODO: Stack implementation using linked list
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link; //stores address of nxt node
};

Node* top; //stores the address of top node

void push(int data){
    //create new node temp and allocate memory in heap
    Node* temp = new Node();

    if(!temp){
        cout<<"\n Stack overflow";
        exit(1);
    }

    temp->data = data; //initialize data into temp data field
    temp->link = top; //put top pointer reference into temp link
    top=temp; //Make temp as top of the stack

}

int isEmpty() {
    return top==NULL;
}

int peek() {
    if(!isEmpty()) return top->data;
    else exit(1);
}

void pop(){
    Node* temp;

    if(top==NULL){
        cout<<"\nStack underflow"<<endl;
        exit(1);
    }
    else{
        temp = top;
        top = top->link;
        free(temp);
    }
}

int main() {
    push(11);
    push(12);
    push(13);
    push(14);

    cout<<peek()<<endl;

    pop();
    pop();

    cout<<peek()<<endl;

    return 0;
}