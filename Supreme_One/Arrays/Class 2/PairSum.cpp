#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> arr{1,3,4,5,6,2,7};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            
            if(arr[i]+arr[j]==9){
                cout<<i<<" "<<j;
                cout<<endl;
            }
            
        }
    }

    return 0;
}