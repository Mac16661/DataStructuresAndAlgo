#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {-5, -2, 5, 2, 4, 7,1, 8, -8};
    int n = 9;
    int pos = 0, neg = 0;

    sort(arr,arr+n);

    while(arr[pos] < 0) {
        pos++;
    }
    cout<<pos<<endl;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int newN= pos + 1;

    for(int i = 1; i < n-1; i=i+2){
        swap(arr[i],arr[pos]);
        pos++;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}