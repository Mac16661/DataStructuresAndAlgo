#include "bits/stdc++.h"
using namespace std;

void printName(string name, int n){
    if(n<=0){
        return;
    }
    cout<<name<<" ";
    printName(name,n-1);
}

int main() {
    string name ="subhodip";
    printName(name,5);
    return 0;
}