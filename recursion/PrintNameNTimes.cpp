#include<bits/stdc++.h>
using namespace std;

// TODO: Approach 1
void printName(string s){
    static int n = 5;
    if(n < 1){
        return;
    }
    cout<<s<<"  ";
    n--;
    printName(s);
}

//TODO: approach 2
void printNameTwo(string s, int n){
    if(n < 1){
        return;
    }
    cout<<s<<" ";
    // n--;
    printNameTwo(s,--n); //always need to put pre-increment here
}

int main() {
    // printName("subhodip");
    printNameTwo("subhodip", 5);
    return 0;
}