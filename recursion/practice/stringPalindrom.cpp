#include "bits/stdc++.h"
using namespace std;

bool P(string s,int i,int n){
    if(i>n) return true;
    
    // cout<<s[i]<<" "<<s[n]<<endl;
    if(s[i]!=s[n]){
        // cout<<"---------"<<endl;
        return false;
    }

    return P(s,i+1,n-1);
}

int main(){
    cout<<P("madam",0,4)<<endl;
    return 0;
}