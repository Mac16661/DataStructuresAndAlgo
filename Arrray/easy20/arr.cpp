#include<bits/stdc++.h>
using namespace std;

//INITILIZE,INSERT,UPDATE,DELETE,TRAVERSE

class Arr{
    int n=5;
    int arr[5];
    public: 

    void initilize(){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }

    void traverse(){
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<"  ";
        }cout<<endl;
    }

    void del(int index){
        for(int i=index; i<n; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = 0;
        traverse();
    }

    void upd(int index, int val){
        arr[index] = val;
        traverse();
    }

    void insert(int index, int val){
        for(int i=n; i>=index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = val;
        traverse();
    }
};

int main() {
    Arr obj;
    obj.initilize();
    obj.traverse();
    obj.del(3);
    obj.insert(2,13);
    obj.upd(1,30);

    return 0;
}