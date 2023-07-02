//TODO: this problem can be solved by using sets , Freq arr and maps with O(n) space time complexity
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {10, 5, 2, 23, 19};
    int arr2[] = { 19, 5, 3};

    int n = 5, m = 3;

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int j = 0, i = 0;

    // 1, 3, 7, 11, 13, 21
    //1, 3, 7, 11

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]){
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            break;
        }
    }
    // cout<<j<<endl;

    if(j == m) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    

    return 0;
}