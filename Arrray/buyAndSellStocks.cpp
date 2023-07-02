#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {7,6,4,3,1};
    int n = 6;
    int min = arr[0], ind=0, max=0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            ind = i;
        }
    }

    for(int i = ind; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max-min<<endl;

    return 0;
}