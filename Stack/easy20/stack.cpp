// TODO: implementing stack using array
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int* arr;
    int top;
    int n;

    public:
    Stack(int size){
        n=size;
        arr=new int [n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"no element to pop"<<endl;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element to int stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }


};

int main(){
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}
