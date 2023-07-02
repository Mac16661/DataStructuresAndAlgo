#include<bits/stdc++.h>
using namespace std;

int main() {
    int num = 230;
    int rem, revNo=0;

    while(num != 0){
        rem = num%10;
        revNo = revNo * 10 + rem;
        num/=10;
    }
    cout<<revNo<<endl;
    return 0;
}