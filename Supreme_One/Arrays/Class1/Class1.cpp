// Topic to read 
// memset
// Array is always pass by reference in function, hence original array is changed.
// Pass size of array along with arr in function call since sizeof() gives the size of array(block of memory used) not the number of elements present in the arr 
// for ex : int arr[10] = {1,2,3}; here sizeof will return 10, but only 3 values are initialized.
// INT_MIN and INT_MAX;
// https://www.geeksforgeeks.org/swap-in-cpp/


#include<iostream>
#include<limits.h>
using namespace std;

// Linear search

// int main(){
//     int arr[10] = {2,3,5,12,5,7,4,23,76,32};
//     int indexOfElement = -1;

//     int elementToFind ;
//     cout<<"Enter element to seach: ";
//     cin>>elementToFind;

//     for(int i=0;i<10;i++){
//         if(arr[i]==elementToFind){
//             indexOfElement=i;
//             break;
//         }
//     }

//     if(indexOfElement==-1){
//         cout<<"Not found";
//     }else{
//         cout<<"Found at index : "<< indexOfElement;
//     }
// }

int main(){
    // to use int min we need to incluse file limits.h
    int a = INT_MAX;
}