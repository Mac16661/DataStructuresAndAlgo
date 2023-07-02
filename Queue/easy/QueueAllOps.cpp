#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int f,r,size;
    
    public:
    Queue(int n){
        size=n;
        arr=new int [n];
        f=-1;
        r=-1;
    }

    bool isFull() {
        if(r==size) return 1;
        return 0;
    }

    bool isEmpty() {
        if(r==f) return 1;
        return 0;
    }

    void enQ(int val){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[++r]=val;
    }

    void dQue(){
        if(isEmpty()) {
            cout<<"UnderFlow" <<endl;
            return;
        }
        f++;
        cout<<arr[f]<<endl;
    }
};

int main() {
    Queue q = Queue(2);
    q.enQ(1);
    q.enQ(2);
    q.enQ(3);
    q.enQ(4);

    q.dQue();
    q.dQue();
    q.dQue();
    q.dQue();
    return 0;
}