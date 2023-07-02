#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "geeks";
    int n = str.length();
    int l=0,r=n-1;

    while(l < r){
        swap(str[l++],str[r--]);
    }

    cout<<str<<endl;

    return 0;
}