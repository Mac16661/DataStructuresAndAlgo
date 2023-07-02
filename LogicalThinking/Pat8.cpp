#include<bits/stdc++.h>
using namespace std; 

int main() {
    for(int i=0; i<5; i++){
        for(int k=0; k<i; k++){
            cout<<" ";
        }
        for(int j=0; j<9-i-i; j++) {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}