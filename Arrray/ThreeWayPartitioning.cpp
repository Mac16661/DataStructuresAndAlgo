#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = 13;
    int a=14, b=20;

    int l=0,r=n-1;

    for(int i = 0; i <= r;){
        if(arr[i] < a){
            if(i == l){
                l++;
                i++;
            }else{
                swap(arr[i++],arr[l++]);
            }
        }
        else if(arr[i] > b) {
            swap(arr[i],arr[r--]);
        }
        else{
            i++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}