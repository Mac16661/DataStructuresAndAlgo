//TODO: this problem can also be solved by suffix and prefix arrays written in notebook (taken O(2N) space complexity)
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {7,4,0,9};
    int n = 4;

    int left=0, right= n-1, res = 0;
    int leftMax = 0, rightMax = 0;

    while(left <= right){
        
        if(arr[left] <= arr[right]){

            if(arr[left] >= leftMax) leftMax = arr[left];
            else res+= leftMax - arr[left];

            left++;
        }else{

            if(arr[right] >= rightMax) rightMax = arr[right];
            else res+= rightMax - arr[right];

            right--;
        }


    }

    cout<<res<<endl;
    return 0;
}