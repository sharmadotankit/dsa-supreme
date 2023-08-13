#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> matrix = {{4,5,8},{7,23,4},{5,3,2}};
    int num;
    cin>> num;
    bool flag=false;

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==num){
                cout<<num<<" found at row : "<<i<<"  and col : "<<j<<endl;
                flag=true;
            }
        }
    }

    if(!flag){
        cout<<"Not found";
    }


    return 0;
}