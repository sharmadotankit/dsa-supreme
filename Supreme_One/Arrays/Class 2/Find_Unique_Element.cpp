// All element comes one time , only one element comes once

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums{1,2,3,4,5,6,5,4,3,2,1};

    int ans=0;

    for(int i=0;i<nums.size();i++){
        ans = ans^nums[i];
    }
    
    cout<<ans;
    return 0;
}