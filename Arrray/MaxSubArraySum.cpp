#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[4] = {-1,-2,-3,-4};
    int maxSum = 0;
    int currentSum = 0;

    for(int i = 0; i < 4; i++) {
        currentSum = currentSum + arr[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
        }

        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}