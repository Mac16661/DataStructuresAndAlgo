#include<bits/stdc++.h>
using namespace std;

//TODO: we dont need to use circular increment technique in double ended queue

//TODO: ***NOTE: WE JUST NEED TO USE SIMPLE QUEUE AND CAN PERFORM INSERTION FROM BOTH FRONT AND REAR BY JUST INCREMENTING/DECREMENTING FRONT AND REAR POINTER.

class doubleEndedQueue{
    int front, rear, size;
    int* arr;
    public:
    doubleEndedQueue(int val) {
        size = val;
        arr= new int[val];
        front=0;
        rear=0;
    }

    int isEmpty(){
        if(rear==front) return 1;
        return 0;
    }

    int isFull() {
        if((rear+1)%size == front) return 1;
        return 0;
    }

    void enqueue(int val) {
        if(isFull()) {
            cout<<"Queue overflow"<<endl;
            return;
        }else{
            rear = (rear+1) % size;
            arr[rear] = val;
            cout<<"Inserted  "<<arr[rear]<<endl;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout<<"Queue underflow"<<endl;
            return;
        }else{
            front = (front+1) % size;
            cout<<"Deleted  "<<arr[front]<<endl;
        }
    }

    void frontVal() {
        if(isEmpty()){
            return;
        }
        if(front == 0){
            cout<< "front of the arr:  " <<arr[front+1]<<endl;
            return;
        }
        cout<< "front of the arr:  " <<arr[front]<<endl;
    }

    void rearVal() {
        if(isEmpty()) return;
        cout<< "rear of the arr:  "<<arr[rear]<<endl;
    }

};



int main() {

    doubleEndedQueue dq(5);

    cout<<dq.isEmpty()<<endl;
    cout<<dq.isFull()<<endl;

    dq.enqueue(1);
    dq.enqueue(2);
    dq.enqueue(3);
    dq.enqueue(4);

    dq.frontVal();
    dq.rearVal();

    dq.dequeue();
    dq.dequeue();
    dq.dequeue();

    dq.frontVal();
    dq.rearVal();

    dq.dequeue();

    dq.frontVal();
    dq.rearVal();

    dq.dequeue();

    dq.frontVal();
    dq.rearVal();


    return 0;
}