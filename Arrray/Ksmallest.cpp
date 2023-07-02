//can't do it in O(n) it will take O(nlogn) bec of sorting in all cases
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[12] = {1,45,4,2,456,32,54,21,2,4,34,12};
    int n = sizeof(arr)/ sizeof(arr[0]);

    sort(arr, arr+n);
    sort(arr, arr + n, greater<int>()); //for sorting in decreasing order using STL

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<arr[n-3];

    return 0;
}