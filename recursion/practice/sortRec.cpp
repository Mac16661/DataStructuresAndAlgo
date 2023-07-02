#include<bits/stdc++.h>
using namespace std;

void sortStackRec(stack<int> st) {
    while(!st.empty()){
        int it = st.top();
        st.pop();
    }
    
}

int main() {
    stack<int> st;

    st.push(41);
    st.push(3);
    st.push(32);
    st.push(2);
    st.push(11);

    sortStackRec(st);

    return 0;
}