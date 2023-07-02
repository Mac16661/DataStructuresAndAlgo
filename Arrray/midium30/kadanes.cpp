//TODO: Kadane's algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int max_so_far= INT_MIN;
    int max_end = 0;

    for(int i = 0; i<arr.size(); i++) {
        max_end = max_end + arr[i];
        if(max_end> max_so_far) {
            max_so_far = max_end;
        }
        if(max_end < 0) {
            max_end = 0;
        }
    }

    cout<<max_so_far<<endl;
    return 0;
}