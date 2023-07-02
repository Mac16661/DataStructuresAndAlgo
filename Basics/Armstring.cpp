#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 1634;
    int cp = n,count=0;
    int arm=0,mod;

    //count no
    while (cp!=0)
    {
        cp = cp/10;
        count++;
    }
    cp = n;

    //break it and calculate power of each digits
    while(cp!=0){
        mod = cp%10;
        arm = arm + pow(mod,count);
        cp = cp/10;
    }

    if(arm==n) cout<<"ARM"<<endl;
    else cout<<"No"<<endl;

    //add it back
    return 0;
}