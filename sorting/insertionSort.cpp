#include "bits/stdc++.h"
using namespace std;

int main() {
    int arr[8] = {23,4,12,45,5,3,21,9};

    //printing arr
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i < 8; i++){
        int curr=arr[i];
        int j=i-1;

        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }

    //After sorting
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}