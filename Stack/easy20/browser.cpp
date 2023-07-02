#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int n;
    Stack(int size){
        n=size-1;
        arr = new int[n];
        top=-1;
        
    }

    void push(int val){
        if(top > n){
            cout<<"SatckOverflow"<<endl;
            return;
        }
        top+=1;
        arr[top] = val;
        
    }

    int pop(){
        if(top==-1){
            cout<<"StackUnderflow";
            return -1;
        }
        return arr[top--];
    }

    void display(){
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }

    void peek(){
        cout<<arr[top]<<endl;
    }

};

void newPage(Stack* bk, int val){
    bk->push(val);
    // cout<<val<<endl;
}

void backward(Stack* fr, Stack* bk, int top, int n){
    int val=bk->pop();
    if(top <= n) fr->push(val);
    
    cout<<"current page is : ";
    bk->peek();
}

void forward(Stack* fr, Stack* bk){
    int val = fr->pop();
    cout<< "current page is: "<<val<<endl;
    bk->push(val);
}

int main() {
    Stack bk(3);
    Stack fr(3);

    int inp;

    while(1){
        cout<<"enter 1 to open new page\tenter 2 to go backward\tenter 3 to go forward\tenter 4 to display all stack elements\tand 5 to exit :: "<<endl;
        cin>>inp;
        switch (inp)
        {
        case 1: int val;
                cout<<"enter page: ";
                cin>>val;
                newPage(&bk, val);
                break;

        case 2: backward(&fr,&bk, bk.top, bk.n);
                break;

        case 3: forward(&fr,&bk);
                break;

        case 4: fr.display();
                bk.display();
                break;
    
        case 5:exit(0);
                break;
        default: cout<<"wrong input Please try again"<<endl;
                break;
        }
    }


    return 0;
}
