#include<bits/stdc++.h>
using namespace std;

// TODO: Linkedlist cycle method
int main() {
    int nums[5] = {3,1,3,4,2};

    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
        // cout<<fast<<"  ";
    }while(slow != fast);

    fast = nums[0];
    while(slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    cout<<slow<<endl;
    return 0;
}