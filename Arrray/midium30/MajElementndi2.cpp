// implement this using hashing
#include<bits/stdc++.h>
using namespace std;

//TODO: optimal
// int main(){
//     vector<int>nums = {2,3,3};
//     int count=0;
//     int candidate=0;

//     for(int num:nums) {
//         if(count==0){
//             candidate=num;
//         }
//         if(num==candidate) count +=1;
//         else count -= 1;
//     }

//     cout<<candidate<<endl;

//     for(int num:nums){
//         cout<<num<<" ";
//     }
//     return 0;
// }

int main() {
    unordered_map<int,int> mp;
    vector<int> nums = {3,2,3};

    for(int i=0; i<nums.size(); i++){
        if(mp.find(nums[i])!=mp.end()) {
            auto it = mp.find(nums[i]);
            it->second = it->second + 1;
            continue;
        }
        mp.insert({nums[i],1});

    }

    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<"->"<<it->second<<endl;
        if(it->second > nums.size()/2){
            cout<<"Majority is  "<<it->first<<endl;
        }
    }
    return 0;
}