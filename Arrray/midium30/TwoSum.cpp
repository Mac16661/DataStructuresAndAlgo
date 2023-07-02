#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[4] = {3,2,4,6};
    int val = 6;
    int n = sizeof(nums)/sizeof(nums[0]);

    for(int i=0; i<n; i++){
        if(nums[i]+nums[i+1] == val){
            cout<<i<<" "<<i+1<<endl;
        }
    }
    return 0;
}