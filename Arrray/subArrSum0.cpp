#include<bits/stdc++.h>
using namespace std;

//TODO: optimal approach uses hashmaps (so we have to use nive approach O(n^2))
int main() {
    int arr[5] = {4, 2, 0 ,1, 6};
    int n = 5;
    int sum = 0;;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++){
            sum = arr[j] + sum;
            if(sum == 0) {
                cout<<"yes"<<"  from index " <<i<<" to index "<<j<<endl;
                break;
            }
        }
        sum = 0;
    }
    return 0;
}