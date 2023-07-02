#include<bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

void spriralPrint(int m, int n, int a[R][C]) {
    int  i, k = 0, l = 0;
    /* 
        k-starting row
        l-starting col
        m-ending row
        n-ending col
        i-iterator
    */

   while(k<m && l<n) {

    //first column
    for(i = l; i < n; ++i){
        cout<<a[k][i]<<"  ";
    }
    k++;

    //last column
    for(i=k; i < m; ++i){
        cout<<a[i][n-1]<<"  ";
    }
    n--;

    //last row from the remaining row
    if(k<m) {
        for(i=n-1; i>= l; --i){
            cout<<a[m-1][i] <<"  ";
        }
        m--;
    }

    //first column form remainig columns
    if(l<n){
        for(i=m-1; i >= k; --i){
            cout<<a[i][l] <<"  ";
        }
        l++;
    }

   }
}

int main( ) {
    int a[R][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    spriralPrint(R,C,a);
    return 0;
}