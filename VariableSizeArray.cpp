//
// Created by AnkitS on 19-09-2023.
//
#include<iostream>
#include<vector>

using namespace  std;

int main(){
    int n,q;
    cin>>n;
    cin>>q;
    vector<vector<int>> valuesForAllArray(n);

    for(int i=0;i<n;i++){
        int numberOfElementsInArray;
        cin>>numberOfElementsInArray;
        for(int j=0;j<numberOfElementsInArray;j++){
            int val;
            cin>>val;
            valuesForAllArray[i].push_back(val);
        }
    }

    for(int i=0;i<q;i++){
        int valueOfI,valueOfJ ;
        cin>>valueOfI;
        cin>>valueOfJ;
        cout<< valuesForAllArray[valueOfI][valueOfJ]<<endl;
    }
    return 0;
}
