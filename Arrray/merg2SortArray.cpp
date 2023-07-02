#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
}

int main() {
    int arr1[6] ={1, 2, 3, 5, 8, 9};
    int arr2[4] = {10, 13, 15, 20};
    int n1 = 6, n2 = 4;

    for(int i = 0; i < n1; i++) {
        if(arr1[i] > arr2[0]) {
            swap(arr1[i], arr2[0]);
            sort(arr2,arr2+n2);
        }
    }

    printArr(arr1,n1);
    cout<<endl;
    printArr(arr2,n2);
    
    return 0;
}