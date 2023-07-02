#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=10;
    int arr[n]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };

    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    int pos = i + 1, neg = 0;

    while (pos < n && neg < pos &&
                     arr[neg] < 0)
    {
        swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
    }

    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    return 0;
}