#include "bits/stdc++.h"
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int i,j,k;
    i=l;
    j=mid+1;
    k=l;

    int b[8];

    while(i<=mid && j<=r){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while(j<=r){
            b[k] = arr[j];
            k++;j++;
        }
    }else if(j>r){
        while(i<=mid){
            b[k] = arr[i];
            k++;i++;
        }
    }

    for(int i=l; i<=r;i++){
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main(){
    int n=8;
    int arr[n] = {12,2,12,43,1,5,4,5};

    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
    return 0;
}