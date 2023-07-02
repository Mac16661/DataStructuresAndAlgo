#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = { 11, 1, 13, 21, 3, 7};
    int arr2[] = { 11, 3, 7, 1};

    int n = 6, m = 4;

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int j = 0,i=0;

    while(i<n && j<m) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] == arr2[j]) {
            j++;
            i++;
        }
        else if(arr1[i] > arr2[j]){ 
            break;
        }
    }
    if(j == m) cout<<"true";
    else cout<<"false";
    return 0;
}