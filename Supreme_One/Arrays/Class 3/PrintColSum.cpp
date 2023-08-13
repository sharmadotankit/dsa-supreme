#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[3][3] ={
        {1,2,3},
        {6,5,6},
        {9,4,7},
    };

    int colSums[3]={0,0,0}; // here 3 is number of column
    // vector<int> colSums(3, 0);

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            colSums[j]+=arr[i][j];
        }    
    }

   for (int col = 0; col < 3; ++col) {
        cout << "Sum of column " << col + 1 << ": " << colSums[col] << endl;
    }
    return 0;
}
