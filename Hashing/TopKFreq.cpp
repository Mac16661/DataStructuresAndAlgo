
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {1,1,2,2,3,3,3,4};
    int arr1[8] = {0};
    int k = 2;

    for(int i =0; i<8; i++){
        arr1[arr[i]]= arr1[arr[i]] + 1;
    }

    sort(arr1,arr1+8);

    for(int i=1; i<=k; i++){
        cout<<arr1[8-i]<<" ";
    }
    return 0;
}