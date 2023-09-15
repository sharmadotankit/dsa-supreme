// class Solution {
// public:
//     int findPivotIndex(vector<int> nums){
//         int start = 0;
//         int end=nums.size()-1;
//         int mid = start + (end-start)/2;

//         while(start<=end){
//             if(start==end){
//                 return start;
//             }
//             if(mid<=end && nums[mid]>nums[mid+1]){
//                 return mid;
//             }
//             if(mid-1>=start && nums[mid-1]>nums[mid]){
//                 return mid-1;
//             }

//             if(nums[start]>nums[mid]){
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
//             mid= start+(end-start)/2;
//         }
//         return -1;
//     }

//     int binarySearch(vector<int> nums,int start,int end,int target){
//         int mid = start+ (end-start)/2;
        
//         while(start<=end){
//             if(nums[mid]== target){
//                 return mid;
//             }
//             if(nums[mid]>target){
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
//             mid= start+ (end-start)/2;
//         }
//         return -1;
//     }

//     int search(vector<int>& nums, int target) {
//         int pivotIndex = findPivotIndex(nums);
//         int ans = 0;
//         if(target>=nums[0] && target<=nums[pivotIndex]){
//             ans= binarySearch(nums,0, pivotIndex,target);
//         }else{
//             ans= binarySearch(nums,pivotIndex+1,nums.size()-1,target);
//         }
//         return ans;
//     }
// };