#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,0,2,1,1,0};
    int lo = 0; 
    int hi = arr.size() - 1; 
    int mid = 0; 

        while (mid <= hi) { 
            switch (arr[mid]) { 

            // If the element is 0 
            case 0: 
                swap(arr[lo++], arr[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(arr[mid], arr[hi--]); 
                break; 
            }
        }
         

    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
    return 0;
}