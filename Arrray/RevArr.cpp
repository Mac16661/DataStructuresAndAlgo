#include<bits/stdc++.h>
using namespace std;

//TODO: Recursive way
void revArr(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end]; //we can put post increment/decrement here arr[start++]
    arr[end] = temp;

    // start++;
    // end--;

    revArr(arr, ++start, --end); //post increment dosent work in function call so we need to use pre-increment to be on the safe side.(or start+1 and end - 1)
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 4;

    //TODO: Iterative way
    // for(int i = 0; i < 5/2; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n];
    //     arr[n] = temp;
    //     n--;
    // }

    revArr(arr,0,4);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
