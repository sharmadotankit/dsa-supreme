#include<iostream>
#include<vector>

using namespace std;

// cppreference.com
//  cplusplus.com


int main(){
    // int n;
    // cin>>n;

    // need to include vector.
    // create vector
    vector<int> arr;

    // push_back is used to insert element
    arr.push_back(1);
    arr.push_back(5);

    // pop_back is used to remove element
    // arr.pop_back();


    // size is used to find number of element in arr
    // arr.size();

    // capacity is used to amount of memory currently allocated to arr
    // arr.capacity();

    // empty to check if arr is empty,returns 0 or 1 for false and true respectively.
    // arr.empty();

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<< ans<<endl;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;


    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<endl;
    // }
    
    vector<int> brr(10); // initialize arr with size 10 all with value 0;

    vector<int> crr(10,2); // initialize arr with size 10 all with value 2;
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;


    vector<int> drr{10,20,30,40};
     for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;

    return 0;
}