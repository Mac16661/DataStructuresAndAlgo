#include<bits/stdc++.h>
using namespace std;

//Trikey one
int main() {
    int n = 6;
    int arr[n] = {1, 4, 3, 2, 6, 7};

    int count = 0;
    
    for(int i = 0; i < n; i++) {
        i = i + arr[i];
        count++;
    }

    cout<<count<<endl;

    return 0;
}