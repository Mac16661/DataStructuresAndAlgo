#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {2,4,1,3,5};
    int n = 5;

    int count = 0;;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] > arr[j]) {
                swap(arr[i],arr[j]);
                count++;
            }
        }
    }

    for(int i = 0 ; i <n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl<< count<<endl;

    return 0;
}