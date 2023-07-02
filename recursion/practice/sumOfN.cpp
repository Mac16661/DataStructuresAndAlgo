#include "bits/stdc++.h"
using namespace std;

//Parameterised way "we send data in parameters to reach termination condition"
void sumOfN(int n, int sum){
    if(n==0){
        printf("%d \n ",sum);
        return;
    }

    sumOfN(n-1,sum+n);
}

//Functional way here we dont pass data as peremeteres
int sumOfNFunc(int n){
    if(n==0){
        return 0;
    }

    return n + sumOfNFunc(n-1);
}

int main() {
    sumOfN(5,0);
    cout<<sumOfNFunc(5);
    return 0;
}