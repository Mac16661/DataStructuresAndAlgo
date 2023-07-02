#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int i,int n){
    while(i <= n) {
        swap(arr[i++],arr[n--]);
    }
}

void nextPermutation(int arr[], int n) {
    int i = n - 2; //as we need to start from second last index

    while(i >= 0 && arr[i] >= arr[i+1]){
        i--;
    }
    
    if(i >= 0) {
        int j = n-1;
        while(arr[j] <= arr[i]) {
            j--; 
        }
        swap(arr[i],arr[j]);
    }
    rev(arr,i+1,n-1);
}

int main() {
    int arr[3] = {1,2,3};
    int n = 3;

    nextPermutation(arr,n);
    for(auto it : arr){
        cout<<it;
    }
    return 0;
}