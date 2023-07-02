#include<bits/stdc++.h>
using namespace std;

class Stack{
    int* arr;
    int top;
    int size;
    public:
    
    Stack(int n){
        size=n;
        arr =new int[n];
        top=-1;
    }

    bool isFull(){
        if(top==size) return 1;
        return 0;
    }

    bool isEmpty(){
        if(top==-1) return 1;
        return 0;
    }

    void push(int val){
        if(isFull()){
            cout<<"StackOverflow"<<endl;
            return;
        }

        arr[++top]=val;
    }

    void pop(){
        if(isEmpty()){
            cout<<"StackUnderflow"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
        top--;
    }

};




int main(){
   Stack st = Stack(5);
   st.push(1);
   st.push(2);
//    st.push(3);
//    st.push(4);
//    st.push(5);
//    st.push(6);
//    st.push(7);

   st.pop();
   st.pop();
   st.pop();
    
    return 0;
}