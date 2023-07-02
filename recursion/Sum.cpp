#include<iostream>
using namespace std;

int sum(int i){
    if(i == 0){
        return 0;
    }

    return i + sum(i - 1);
}

int main() {
    int i = 3;
    cout<<sum(i)<<endl;
    return 0;
}