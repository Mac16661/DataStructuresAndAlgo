#include "bits/stdc++.h"
using namespace std;

int main() {
    int arr[5] = {1,2,2,3,2};

    unordered_map<int,int> mp;

    for(int i=0; i<5; i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second > (5/3)){
            cout<<it.first<<endl;
        }
    }
    return 0;
}