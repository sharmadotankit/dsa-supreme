//
// Created by AnkitS on 14-10-2023.
//
#include<iostream>

using namespace std;

bool isSorted(int arr[],int size,int index){
    if(index>=size){
        return true;
    }

    if(arr[index]> arr[index-1]){
        bool ageKaAns = isSorted(arr,size,index+1);
        return ageKaAns;
    }else{
        return false;
    }
}


int main(){
    int arr[]={1,2,3,4,5,6,4};
    bool ans =  isSorted(arr, 7,1);
    cout<<"Array is sorted? "<< ans;
    return 0;
}