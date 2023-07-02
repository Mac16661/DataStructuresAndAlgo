#include<bits/stdc++.h>
using namespace std;

int main() {
    int mat[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    string flag="false";

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] == target){
                flag="true";
                break;
            }
        }
        cout<<endl;
    }
    cout<<flag<<endl;
    return 0;
}