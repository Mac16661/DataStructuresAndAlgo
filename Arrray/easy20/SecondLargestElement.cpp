#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {23,0,12,4,2,3,7};

    for(int i=0; i < 2; i++){
        for(int j=i+1; j < 7; j++) {
            if(arr[i] > arr[j]) swap(arr[i],arr[j]);
        }
    }

    cout<<"Second smallest element is "<<arr[1]<<endl;

    for(int i=0; i < 2; i++){
        for(int j=i+1; j < 7; j++) {
            if(arr[i] < arr[j]) swap(arr[i],arr[j]);
        }
    }

    cout<<"Second largest element in the array is "<<arr[1]<<endl;

    // for(int i=0; i<7; i++){
    //     cout<<arr[i]<<"  ";
    // }


    return 0;
}