#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {10,5,10,15,10,5};
    map<int,int> mp;

    for(int i=0; i<6; i++){
        mp[arr[i]]++;
    }

    for(auto x : mp)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}