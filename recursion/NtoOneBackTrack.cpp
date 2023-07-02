// This method is kind of backtracking(printing n to 1 without using n--)
#include<bits/stdc++.h>
using namespace std;

void printN(int i, int n) {
    if(i > n) {
        return;
    }
    printN(i+1,n);
    cout<<i<<"  ";
}

int main() {
    printN(1,3);
    return 0;
}