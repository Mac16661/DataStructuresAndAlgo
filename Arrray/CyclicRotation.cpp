//we can do it even by swaping method
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = arr[n - 1], i;

    for (i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    
    arr[0] = x;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}