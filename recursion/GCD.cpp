#include<bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2) {
    if(n2 != 0){
        return hcf(n2, n1 % n2);
    }else{
        return n1;
    }
}

int main() {
   int a = 30, b = 45;
   cout<<"hcf of 30 and 45 is  "<<hcf(a,b)<<endl; 
   return 0;
}