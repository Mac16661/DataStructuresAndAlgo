//TODO: unique data with no order
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(16);

    //check weather the element is present or not 
    cout<<s.count(4);

    //s.begin() ; s.end() //return an iteretor pointing start and after last operator

    //s.clear() //deletes all the date

    //it retrun an operator if element present else return end if element not found
    if(s.find(3) != s.end()) cout<<"true"<<endl;

    s.erase(2); //delete a perticular element;

    for(auto it=s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

    if(s.empty() == false) cout<<"set is empty"<<endl;

    return 0;
}