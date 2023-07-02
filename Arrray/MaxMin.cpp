#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {3,5,6,1,8};

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < 5; i++){
        if(min > arr[i]){
            min = arr[i];
        }

        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<max<<" < - max  min - > " <<min<<endl;
    return 0;
}