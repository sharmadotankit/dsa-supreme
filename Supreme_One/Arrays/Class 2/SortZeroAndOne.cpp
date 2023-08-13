#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{0,0,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,0,1,0};
    int i=0;
    int j= arr.size()-1;

    while(i<=j){
        while(arr[i]==0){
            i++;
        }

        while(arr[j]==1){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    for(auto value: arr){
        cout<<value<<" ";
    }
}