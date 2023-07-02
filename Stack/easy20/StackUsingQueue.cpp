//TODO: implementing queue using single queue
#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int>q;
    public:

    void push(int val){
        int s = q.size();
        q.push(val);
        for(int i=0; i<s; i++){
            
            q.push(q.front());
            q.pop();
            cout<<q.front()<<" ";
        }
        cout<<endl;
    }

    void pop(){
        cout<<q.front()<<endl;
        q.pop();        
    }
};

int main() {    
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();
    st.pop();
    st.pop();
    return 0;
}