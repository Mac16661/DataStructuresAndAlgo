//TODO: incorrect implementation
#include<bits/stdc++.h>
using namespace std;

void matZero(int matrix[3][4], int r, int c){
    for(int i = 0; i<4; i++){
        matrix[r][i] = -1;
    }

    for(int i = 0; i<4; i++){  
        matrix[i][c] = -1;
    }
}

int main() {
    int r=0,c=0;
    int matrix[3][4]={{0,1,2,0},
                      {3,4,5,2},
                      {1,3,1,5}};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(matrix[i][j]==0){
                r=i;
                c=j;
                matZero(matrix,i,j);
            }
        }
    }


    //Printing matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(matrix[i][j]==-1){
                cout<<0;
            }else{
                cout<<matrix[i][j];
            }
            
        }
        cout<<endl;
    }

    return 0;
}