#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> res;
    unordered_map<int,int> mp;

    // for(int i=0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;

    for(int i = 0; i <nums.size(); ++i){
        // cout<<target-nums[i]<<" "<<i<<"  ";
        if(mp.find(target-nums[i]) != mp.end()) {
            // cout<<target-nums[i] <<"  ";
            // cout<<mp[target-nums[i]]<<" ";
            res.emplace_back(i);
            res.emplace_back(mp[target-nums[i]]);
            return res;
        }
        mp[nums[i]] = i;
    }

    return res;
}

int main() {
    vector<int> nums = {3,2,4,6};
    int target = 6;

    vector<int> r = twoSum(nums,target);
    for(auto i=0; i<r.size(); i++){
        // cout<<r[i]<<", ";
        cout<<endl;
    }

    return 0;
}