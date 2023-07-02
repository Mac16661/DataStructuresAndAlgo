#include<bits/stdc++.h>
using namespace std;

int main(){
    

    // int min=INT16_MAX;
    // int minInd=0;
    // int max=INT16_MIN;
    // int maxInd=0;
    // for(int i = 0; i<5; i++){
    //     if(arr[i] < min){
    //         min = arr[i];
    //         minInd = i;
    //     }
    // }

    // for(int i=minInd; i<5; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //         maxInd = i;
    //     }
    // }
    
    // cout<<arr[maxInd]-arr[minInd]<<endl;
    int arr[6] = {7,1,5,3,6,4};
    int maxP = 0;
    int minP = INT16_MAX;

    for(int i =0; i< 6; i++){
        minP=min(minP,arr[i]);
        maxP=max(maxP,arr[i]- minP);
    }

    cout<<maxP<<endl;

    return 0;
}