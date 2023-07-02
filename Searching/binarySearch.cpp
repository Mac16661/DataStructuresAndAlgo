#include "bits/stdc++.h"
using namespace std;

void bSearch(int arr[], int num){
    int low=0;
    int high=9;
    int mid;
    while(low<high){
        mid=(low+high)/2;
        
        if(arr[mid]==num){
            cout<<"position:  "<<mid;
            break;
        }

        else if(arr[mid] > num){
            high=mid-1;
        }

        else if(arr[mid] < num){
            low=mid+1;
        }
    }
}

void revBinarySearch(int arr[], int low, int high,int num){
    int mid = (low+high)/2;
    if(low>high) {
        cout<< -1<<endl;
        return;
    }

    if(arr[mid]==num) {
        cout<<mid<<endl;
        return;
    }
    else if(num >arr[mid]){
        low=mid+1;
        revBinarySearch(arr, low, high, num);
    }else if(num <arr[mid]){
        high=mid-1;
        revBinarySearch(arr,low,high,num);
    }

}

int main() {
    int arr[9]= {1,2,3,4,5,6,7,8,10};
    // bSearch(arr,6);
    revBinarySearch(arr,0,9,6);
    
    return 0;
}