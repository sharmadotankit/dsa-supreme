#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr{1,2,-13,4,-5,6,-6,-30,-45,-56,-77,34,45,76,-76};

    // int np = 0;
    // int pp=0;

    // while(pp<arr.size()){
    //     if(arr[pp]<0){
    //         swap(arr[pp],arr[np]);
    //         np++;
    //         pp++;
    //     }else{
    //         pp++;
    //     }
    // }

    int low = 0;
    int high = arr.size()-1;

    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if (arr[high]>0){
            high--;
        }else{
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }

    for(auto value: arr){
        cout<< value<< " ";
    }

    return 0;
}