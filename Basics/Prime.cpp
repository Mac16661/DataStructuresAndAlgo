#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 27;
    int c=0;

    for(int i = 1; i <sqrt(n); i++){
        if(n%i==0){
            c++;
            if(i!=n/i) c++;
        }
    }

    if(c>2) cout<<"Non Prime"<<endl;
    else cout<<"Prime"<<endl;
    return 0;
}