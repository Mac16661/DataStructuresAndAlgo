#include<bits/stdc++.h>
using namespace std;

void printInt(int n) {
    static int i = 0;
    if(i > n){
        return;
    }

    cout<<i<<"  ";
    i++;
    printInt(n);
}

int main(){
    printInt(5);
    return 0;
}