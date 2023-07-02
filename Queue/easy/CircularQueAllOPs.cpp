#include<bits/stdc++.h>
using namespace std;

class Que{
    int* arr;
    int r,f,size;

    public:

    Que(int n){
        size = n;
        r=0;
        f=0;
        arr =new int [n];
    }

    bool isFull(){
        if((r+1)%size==f) return 1;
        return 0;
    }

    bool isEmpty(){
        if(f == r) return 1;
        return 0;
    }

    void enQue(int val){
        if(isFull()){
            cout<<"OverFlow"<<endl;
            return;
        }
         
        r=(r+1)%size;
        arr[r]=val;
    }

    void deQue(){
        if(isEmpty()){
            cout<<"UnderFlow"<<endl;
            return;
        }

        f=(f+1)%size;
        cout<<arr[f]<<endl;
    }

};

int main(){
    Que q = Que(3);

    q.enQue(1);
    q.enQue(2);
    q.enQue(3);
    q.enQue(4);
    q.enQue(5);

    q.deQue();
    q.deQue();
    q.deQue();
    q.deQue();
    return 0;
}