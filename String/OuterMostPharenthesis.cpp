#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "(()())(())()";
    int bf=0;
    int l=0,r=0;

    for(int i = 0; i<s.length(); i++){
        if(s[i]=='('){
            bf++;
        }else if(s[i] ==')'){
            bf--;
        }
        r++;
        if(bf==0){
            s[l]=' ';
            s[r-1]=' ';
            l=r;
        }
         
    }

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    // cout<<s.length()<<" ";

    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<" ";
    }


    return 0;
}