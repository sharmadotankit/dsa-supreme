#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

// no duplicate value
int main(){

    int arr[] = {1,2,4,6,8,10};
    int sizea = 4;
    int arr2[] = {3,4,5,6};
    int sizeb =  5;

    vector<int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
        for(int j=0;j<sizeb;j++){
            if(arr2[j]== arr[i]){
                arr2[j]=INT_MIN;
            }
        }
    }

    for(int i=0;i<sizeb;i++){
        if(arr2[i]!= INT_MIN){
            ans.push_back(arr2[i]);
        }    
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}