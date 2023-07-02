#include<bits/stdc++.h>
using namespace std;

void factorial(int fact,int x,vector<int>& list ,int n){
    fact=fact*x;
    x++;

    if(fact > n){
        return;
    }

    list.push_back(fact);

    factorial(fact,x,list,n);
}

int main() {
    vector<int> list ;
    factorial(1,1,list,1500);

    for(int i=0; i<list.size(); i++){
        cout<<list[i]<<" ";
    }
    return 0;
}