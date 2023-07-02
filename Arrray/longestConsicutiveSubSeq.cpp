#include<bits/stdc++.h>
using namespace std;

//TODO: can be solved in O(nlogn) time complexity if wanna use O(1) space complexity <-- nive approach [optimal soln we can get from hashmap, priority queuq]

int main() {
    int arr[7] = {1, 9, 3, 10, 4, 20, 2};
    int n = 7;

    sort(arr,arr+n);
    int c = arr[0];
    
    for(int i = 0; i < n; i++) {
        if(arr[i+1] != arr[i]+1){
            cout<<arr[i]<<endl;
            break;
        }
    }



    return 0;
}