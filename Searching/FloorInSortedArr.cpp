#include<bits/stdc++.h>
using namespace std;

int arrFloor(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int mid,floor;
    
    while(low < high){
        mid = low+high/2;

        if(mid > x){
            low = mid+1;
        }else if(mid < x){
            if(mid > floor){
                floor = mid;
            }
            high = mid-1;
        }
    }

    return floor;
}

int main() {
    int arr[7] = {1,2,8,10,11,12,19};
    cout<<arrFloor(arr,7,5)<<endl;

    return 0;
}