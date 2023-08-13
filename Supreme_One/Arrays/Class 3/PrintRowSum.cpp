#include<iostream>

using namespace std;


int main(){
    int arr[3][2] ={
        {1,2},
        {6,5},
        {9,4},
    };

    for(int i=0;i<3;i++){
        int rowSum = 0;
        for(int j=0;j<2;j++){
            rowSum+=arr[i][j];
        }

        cout<<rowSum<<" ";
    }
    return 0;
}