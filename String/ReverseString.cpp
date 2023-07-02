#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "this is an amazing program";
    string temp="";
    string ans="";

    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        char ch= str[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }

    cout<<ans<<endl;

    return 0;
}