#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 7, 9, 5, 8, 7, 4};
    int k = 6, n = 7;
    int left = 0, right = n-1;
    int count = 0;

   

    while(left < right) {
        if(arr[left] > k && arr[right] <= k){
            swap(arr[left],arr[right]);
            left++;
            right--;
            count++;
        }else if(arr[left] <= k){
            left++;
        }else if(arr[right] > k){
            right--;
        }
  
    }

    cout<<count<<endl;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
    return 0;
}