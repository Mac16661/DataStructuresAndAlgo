#include<bits/stdc++.h>
using namespace std;

//TODO: we can divide it by 10 
//TODO: apply log base 10 + 1
//TODO: string.length()

int main() {
    int no = 123456;
    int count=0;

    while(no != 0){
        no = no/10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}