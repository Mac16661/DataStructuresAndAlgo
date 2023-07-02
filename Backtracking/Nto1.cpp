//Print n  to  1 by backtracking 
//TODO: if we print after function call it will backtrack
#include "bits/stdc++.h"
using namespace std;

void NtoOne(int i,int n){
    if(i>n) return;

    
    NtoOne(i+1, n);
    cout<<i<<" ";
}

int main() {
    NtoOne(1,5);
    return 0;
}