//TODO: subarray with the given sum
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr={1, 7, 3, 9};
    int sum = 10;
    int i = 0;
    int sum_so_far = 0;
    int sIndex =0;

    while (true)
    {
        if(sum_so_far<sum){
            sum_so_far = sum_so_far + arr[i];
            i++;
            // cout<<sum_so_far<<" ";
        }else if(sum_so_far > sum){
            sum_so_far = 0;
            sIndex++;
            i=sIndex;
            // cout<<sum_so_far<<" "<<i;
        }
        else if(sum_so_far == sum){
            while(sIndex < i){
                cout<<arr[sIndex]<<"  ";
                sIndex++;  
            }
            break;
        }
    }
    

    return 0;
}