#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 123;
    int cpy = n;
    int rem;
    int rev = 0;
    while(cpy != 0){
        rem = cpy%10;
        rev = rev*10 + rem;
        cpy/=10;
    }
    
    if(rev ==n) cout<<"YES"<<endl;
    else cout<<"No"<<endl;
    return 0;
}