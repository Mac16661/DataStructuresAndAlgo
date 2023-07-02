#include<bits/stdc++.h>
using namespace std;

//Approach will fail if any element is 0

int main() {
    int n=4;
    int arr[n] = {5,2,2,1};
    int k = 5;
    int count =0;
    int countMax = 0;
    int sum = 0;
 

    for(int i = 0; i < n; i++) {
        count++;
        sum+=arr[i];
        
        if(sum==k) {
            if(count > countMax) countMax = count;
            count=0;
            sum=0;
            cout<<arr[i] <<"  ";
        }
        
    }

    cout<<countMax<<endl;
    return 0;
}