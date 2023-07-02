#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,3};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[8];
    int n3 = sizeof(arr3)/sizeof(arr3[0]);

    //O(m+n)
    int i;
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for(int j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    sort(arr3,arr3+n3); //O(nlog) orO((m+n)*log(m+n))

    int current = 0, next = 1, count = 0;
    //O(n)
    while(next < n3) {
        if(arr3[current] == arr3[next]){
            count++;
        }
        current++;
        next++;
    }

    cout<<"UNion" <<n3-count<<endl;
    cout<<"INtersection" <<count<<endl;


    return 0;
}