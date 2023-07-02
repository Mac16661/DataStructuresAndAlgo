#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1;

    // Inserting elements in the vector
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }

    for(auto it = v1.begin(); it != v1.end(); it++)
        cout<<*it<<"  ";
    
    cout<< "\n the front of the element : "<<v1.front();
    cout<< "\nLast element in the vector : "<<v1.back();
    cout<< "\nThe size of the vector : "<<v1.size();
    cout<< "\nDeleting element from the end : "<< v1[v1.size() - 1];
    v1.pop_back();

    cout<<endl;
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout<<*it<<"  ";
    }

    //insert in the front->
    v1.insert(v1.begin(),5);
    cout<<"first element is "<<v1[0]<<endl;

    v1.erase(v1.begin());

    if(v1.empty()) cout<<"\n vector is empty\n";
    else cout<< "\nvector is not empty\n";

    v1.clear(); //delete all the element in the array

    cout<<"size of the vector after clear "<<v1.size();

    return 0;
}