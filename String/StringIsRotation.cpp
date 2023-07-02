#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "AACD";
    string g = "ACDA";

    string whole = s+s; //AACDAACD

    if(s.length()!=g.length()) return false;

    // cout<<whole.find(g)<<endl; if g is the subset of whole then it will return 1

    if(whole.find(g) == 1) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}