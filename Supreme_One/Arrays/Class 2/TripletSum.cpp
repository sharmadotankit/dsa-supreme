#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> arr{10,20,30,40};

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==80){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }


    return 0;
}