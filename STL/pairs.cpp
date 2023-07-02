//TODO: when key value pair data is need to be store
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int , int> p = {1,12};
    cout<<p.first<<"  ->  "<<p.second<<endl;

    //nested pairs
    pair<int, pair<int,int>> np = {2,{12,13}};
    cout<<np.first<<" -> "<<np.second.second<<" , "<<np.second.second<<endl;

    //arr of pairs
    pair<int, int> arr[] = {{1,2}, {2,5}, {5,2}};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" -> "<<arr[i].second<<endl;
    }
    
    return 0;
}