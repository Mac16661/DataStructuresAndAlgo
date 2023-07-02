#include "bits/stdc++.h"
using namespace std; 

int main() {
    int arr[8] = {12,45,23,51,19,28,32,1};
    int n = 8;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}