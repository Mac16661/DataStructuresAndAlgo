#include<bits/stdc++.h>
using namespace std;

//Solved using kadans algo
int main() {
    int arr[5] = {-2, -3, 0, -2, -40 };
    int n = 5;

    int prod = 1; int maxProd = 1;

    for(int i = 0; i < n; i++) {
        prod = arr[i] * prod;
        if(maxProd < prod) {
            maxProd = prod;
        }

        if(prod == 0) {
            prod = 1;
        }
    }

    cout<<maxProd<<endl;
    return 0;
}