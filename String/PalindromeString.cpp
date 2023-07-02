#include<bits/stdc++.h>
using namespace std;

int main() {
    string s="abc";    
    int i=0,j=s.length()-1,flag=0;

    while(i<j){
        if(s[i]!=s[j]){
            flag=-1;
            break;
        }
        i++;j--;
    }

    if(flag==0) cout<<"palindrome"<<endl;
    else cout<<"non-palindrome"<<endl;
    return 0;
}