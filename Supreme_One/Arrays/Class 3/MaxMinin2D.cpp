#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

pair<int,int> getMinMax(vector<vector<int>> arr){
    int maxVal = INT_MIN;
    int minVal = INT_MAX;


    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]<minVal){
                minVal = arr[i][j];
            }

            if(arr[i][j]>maxVal){
                maxVal = arr[i][j];
            }
        }
    }

    return make_pair(minVal,maxVal);
}

int main(){

    vector<vector<int>> matrix ={{1,2,3},{4,5,34},{4,5,76}};

    pair<int,int> minMaxAns  = getMinMax(matrix);

    cout<<minMaxAns.first<<"  "<<minMaxAns.second;
    
    return 0;
}

