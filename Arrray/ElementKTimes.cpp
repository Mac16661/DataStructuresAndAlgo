#include<bits/stdc++.h>
using namespace std;

void FreqCount(int arr[], int n, int k) {
    int x = n/k;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    //Traversing the map
    for(auto i : freq) {
        if(i.second > x){
            cout<< i.first <<endl;
        }
    }

    // for(auto i : freq) {
    //     cout<< i.first<<"  "<<i.second<< endl;
    // }
}

//TODO: using hashing to get soln in O(n) time and O(k) space complexity
int main() {
    int arr[8] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = 8;
    int k = 4;
    
    FreqCount(arr,n,k);

    return 0;
}