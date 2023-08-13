#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<vector<int>> matrixA ={{3,2,1},{6,3,8},{7,4,8}};
    vector<vector<int>> matrixB(3,vector<int>(3, 0));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrixB[i][j] = matrixA[j][i];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrixB[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}