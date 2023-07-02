#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 3, 4, 1, 6, 9};
    int n = 6;
    int sum = 24;

    sort(arr,arr+n);
    int l,r;

    for(int i = 0; i < n; i++) {
        l = i + 1;
        r = n - 1;
        
        while(l < r) {
            if(arr[i] + arr[l] + arr[r] == sum) {
                cout<<"Triplet  "<<arr[i]<<"  " <<arr[l]<<"   "<<arr[r]<<endl;
                break;
            }
            else if(arr[i]+arr[l]+arr[r] < sum) l++;

            else r--; //arr[i]+arr[l]+arr[r] > sum
        }
    }
    return 0;
}