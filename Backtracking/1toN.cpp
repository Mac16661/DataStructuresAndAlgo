// print 1 to N without using f(i+1,n)
#include "bits/stdc++.h"
using namespace std;

void printToN(int i, int n){
    if(i<1) return;

    // cout<<i<<"  "; //here this will print int reverse order
    printToN(i-1,n);

    cout<<i<<" "; //and this will print in ascending order
}

int main() {
    printToN(5,5);
    return 0;
}