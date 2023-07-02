#include<bits/stdc++.h>
using namespace std;

bool palindrom(string s, int i) {
    int n = s.length();

    if(i >= n / 2){
        return true;
    }

    if(s[i] != s[n-i-1]) {
        return false;
    }else {
        return palindrom(s, ++i);
    }
}

int main() {
    string s = "madam";
    int n = s.length();
    cout<<palindrom(s,0)<<endl;

    return 0;
}