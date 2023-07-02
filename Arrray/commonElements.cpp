#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1 = 6, n2 = 5, n3 = 8;
    int A[n1] = {1, 5, 10, 20, 40, 80};
    int B[n2] = {6, 7, 20, 80, 100};
    int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};

    int i = 0, j = 0, k = 0;
    while(i < n1 || j < n2 || k < n3){
        if(A[i] < B[j] && A[i] <C[k]) {
            i++;
        }

        if(B[j] < A[i] && B[j] < C[k]) {
            j++;
        }

        if(C[k] < A[i] && C[k] < B[j]) {
            k++;
        }

        if(A[i] == B[j] && A[i] == C[k]){
            cout<<A[i]<<endl;
            i++;
            j++;
            k++;
        }

        
    }
    return 0;
}