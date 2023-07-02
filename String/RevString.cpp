#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";
    int n=s.length();
    int j=n-1, i=0;

    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }
    
    cout<<s<<endl;

    return 0;
}