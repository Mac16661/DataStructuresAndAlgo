//TODO: need hashing for optimal solution
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[13] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int k = 11, n = 13, count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j<n; j++){
            if(arr[i]+ arr[j] == k) {
                count++;
            }
        }
    }

    cout<<count<<endl;
    
    
    return 0;
}