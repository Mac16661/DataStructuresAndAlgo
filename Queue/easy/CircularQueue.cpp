#include<bits/stdc++.h>
using namespace std;

class circularQueue{
    int size;
    int f;
    int r;
    int* arr;
    public:
    circularQueue(int val){
        size = val;
        arr= new int[val];
        f=0;
        r=0;
    }

    int isEmpty() {
        if(r==f) return 1;
        return 0;
    }

    int isFull() {
        if((r+1)%size == f) return 1;
        return 0;
    }

    //TODO: 0th element will be empty
    void enqueue( int val) {
        if(isFull()) {
            printf("queue overflow\n");
            return; 
        }else{
            r=(r+1)%size;
            arr[r]=val;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            printf("queue underflow\n");
            return;
        }else{
            f=(f+1)%size;
            cout<<arr[f]<<endl;
        }
    }

    
};



int main() {
    circularQueue q(5);
    // cout<<q.isEmpty()<<endl;
    // cout<<q.isFull()<<endl;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    q.dequeue();
    q.dequeue();

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}