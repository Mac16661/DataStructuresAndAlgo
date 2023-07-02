#include<bits/stdc++.h>
using namespace std;

void reverse(string &str) {
    static int i = str.length();

    if(i < 0){
        return;
    }

    cout<<str[i];
    i--;
    reverse(str);
}



int main(){
    string s = "binod";
    // reverse(s);

    int j = s.length();

    for(int i = 0; i <= j/2; i++){
        swap(s[i],s[j - i - 1]);         
    }

    cout<<s<<endl;
    return 0;
}