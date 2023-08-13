#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


int main(){
    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};


    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            int element = arr[i];
            if(element==brr[j]){
                brr[j]= INT_MIN;
                ans.push_back(element);
            }
        }
    }

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    

    for(auto value:ans){
        cout<<value<<" ";
    }


    return 0;
}