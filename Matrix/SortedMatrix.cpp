#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

    int arr[n*n];
    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[k] = mat[i][j];
            k++;
        }
    }

    sort(arr,arr+n*n);

    k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j]=arr[k];
            k++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}