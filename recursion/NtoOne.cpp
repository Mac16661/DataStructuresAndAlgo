#include<bits/stdc++.h>
using namespace std;

void printInt(int n){
    if(n < 1){
        return;
    }
    cout<<n<<"  ";
    printInt(--n);
}

int main() {
    printInt(5);
    return 0;
}