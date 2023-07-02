#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

string infixToPostfix(string exp){
    string result;
    stack<char> st;
    
    for(int i=0; i<exp.length();i++){
        char a=exp[i];

        if((a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0' && a<='9')){
            result+=a;
        }
        else if(a=='(') {
            st.push('(');
        }
        else if(a==')') {
            while (st.top()!='(')
            {
                result+= st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(a) <= prec(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(a);
        }
    }
    while(!st.empty()){
        result+= st.top();
        st.pop();
    }
    // cout<<result<<endl;
    return result;
}

string infixToPrefix(string infix){
    int l = infix.size();

    //TODO: reversing the infix string
    reverse(infix.begin(), infix.end());

    //TODO: changing the brackets
    for(int i=0; i<l; i++){
        if(infix[i]=='(') infix[i] = ')';
        else if(infix[i]==')') infix[i] = '(';
    }

    string prefix = infixToPostfix(infix);

    //TODO: after changing to postfix reverse the expression
    reverse(prefix.begin(),prefix.end());

    return prefix;
}

int main() {
    string exp = "(A-B/C)*(A/K-L)";
    // cout<<infixToPostfix(exp)<<endl;
    cout<<infixToPrefix(exp)<<endl;
    return 0;
}