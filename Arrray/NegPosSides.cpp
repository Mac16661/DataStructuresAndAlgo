#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[9]= {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;


    while(start <= end) {
   
        if(arr[start] >= 0 && arr[end] < 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }


        if(arr[start] < 0){
            start++;
        }

        if(arr[end] >= 0){
            end--;
        }

        
    }


    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<"  ";
    }

    
    return 0;
}