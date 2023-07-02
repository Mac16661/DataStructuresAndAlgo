#include<iostream>
using namespace std;

void printArr(int arr[5], int n) {
    static int i;

    if(i == n){
        // i = 0;
        cout<< endl;
        return;
    }

    cout<< arr[i]<< "  ";
    i++;

    printArr(arr,n);
}

int main() {
    int arr[5] = { 1,2,3,4,5};
    printArr(arr, 5);
    return 0;
}