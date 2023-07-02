#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = 7, m = 3;

    sort(arr, arr+n);
    int min = arr[n-1], i = 0;

    while(m < n) {
        if(arr[m-1] - arr[i] < min){
            min = arr[m-1] - arr[i];
        }
        i++,m++;

    }

    cout<<min<<endl;
    return 0;
}