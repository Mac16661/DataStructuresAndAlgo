#include "bits/stdc++.h"
using namespace std;

void revStack(stack<int> s){
    if(s.empty()) return;

    int top = s.top();
    s.pop();
    revStack(s);
    cout<<top<<" ";
    
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    revStack(s);

    // s.pop();
    // cout<<s.top()<<endl;
    return 0;
}