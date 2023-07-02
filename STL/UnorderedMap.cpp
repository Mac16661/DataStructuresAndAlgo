#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,int> mp;

    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});

    auto it = mp.begin();
    cout<<it->first<<" "<<it->second<<endl;

    it=mp.find(2);
    cout<<it->first<<" "<<it->second<<endl;
    return 0;   
}