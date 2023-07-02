#include<iostream>
using namespace std;

int factorial(int i) {
    if(i <= 1) {
        return 1;
    }

    return i * factorial(i - 1);
}

int main() {
    int i = 12;
    cout<< "factorial of "<< i <<"  " << factorial(i)<<endl;
    return 0;
}