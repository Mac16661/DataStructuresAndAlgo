#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[8]={23,43,21,12,4,2,65,2};
    int n=8;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}