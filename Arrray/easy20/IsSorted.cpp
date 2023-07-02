#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {1,4,22,234,244,442,551};
    int n = 7;
    int flag = 0;

    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]) flag=1;
    }

    if(flag) cout<<"false"<<endl;
    else cout<<"true"<<endl;

    return 0;
}