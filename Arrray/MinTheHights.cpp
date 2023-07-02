#include<bits/stdc++.h>
using namespace std;

int main() {
    int k = 3, n = 5;
    int arr[n] = {3, 9, 12, 16, 20};

    sort(arr, arr+n);

    arr[0] = arr[0] + k;

    if(arr[n-1] >= k) {
        arr[n-1] = arr[n-1] -k;
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }

    cout<<arr[0] << " - "<<arr[n-1]<< " = "<<arr[n-1] - arr[0]<<endl;

    //TODO: if u don't even add return 0 it will work just fine.
    // return 0; 
}