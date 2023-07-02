#include<bits/stdc++.h>
using namespace std;

void Aprch(int num1,int num2){
    for(int i = min(num1,num2); i >= 0; i--){
        if(num1%i==0 && num2%i==0){
            cout<<i<<endl;
            break;
        }
    }
}

int main() {
    int num1=9,num2=12;

    // for(int i = 0; i < min(num1,num2); i++){
    //     if(num1%i ==0 && num2%i==0){
    //         cout<<i<<endl;
    //     }
    // }

    //Slight optimization
    Aprch(num1,num2);
    
    return 0;
}