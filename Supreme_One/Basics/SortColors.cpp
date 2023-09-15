#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
      // this question can be solved with inbuilt sort method but it is mentioned in the question not to use it.
      // sort(nums.begin(),nums.end());
        int size = nums.size();
      
      // using counter method 
        // int zeros=0,ones=0,twos=0;
  
        // for(int i=0;i<size;i++){
        //   if(nums[i]==0){
        //     zeros++;
        //   }
        //   if(nums[i]==1){
        //     ones++;
        //   }
        //   if(nums[i]==2){
        //     twos++;
        //   }
        // }
  
        // while(zeros>0){
        //   nums[i]=0;
        //   zeros--;
        // }
  
        // while(ones>0){
        //   nums[i]=0;
        //   ones--;
        // }
  
        // while(twos>0){
        //   nums[i]=0;
        //   twos--;
        // }

      // in place sort or three pointer approach
      void sortColors(vector<int>& nums) {
        int high = nums.size()-1;
        int low=0;
        int medium = 0;
        while(medium<=high){
            if(nums[medium]==0){
              swap(nums[medium],nums[low]);
              low++;
              medium++;
            }else if(nums[medium]==1){
              medium++;
            }else{
              swap(nums[medium],nums[high]);
              high--;
            }
        }  
      }
      
      
      
    }
};

int main() {  
  return 0; 
}