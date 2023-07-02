//TODO: reverse an array using functional recursion
#include "bits/stdc++.h"
using namespace std;

void rev(int arr[],int i, int n){
    if(i>n) return;

    swap(arr[i],arr[n]);
    rev(arr,i+1,n-1);
}



void PrintRev(int arr[],int i,int n){
    if(i>n) return;

    cout<<arr[i]<<" ";
    PrintRev(arr,i+1,n);
}

int main() {
    int arr[5] = {1,2,3,4,5};
    rev(arr,0,4);

    PrintRev(arr,0,4);
    return 0;
}