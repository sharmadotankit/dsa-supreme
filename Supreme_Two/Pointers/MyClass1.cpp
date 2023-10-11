//
// Created by AnkitS on 11-10-2023.
//


#include<iostream>

using namespace  std;

int main(){
    int a = 35;
    int*  ptr = &a;
    cout<<"size ptr : "<<sizeof(ptr)<<endl;

    char ans = 'a';
    char* ansPtr = &ans;
    cout<<"size ansPtr: "<<sizeof(ansPtr);
    return 0;
}