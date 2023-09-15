// 724. Find Pivot Index


// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         vector<int> nums1 = nums;
//         vector<int> nums2 = nums;
//         for(int i=1;i<nums.size();i++){
//             nums1[i]= nums1[i-1]+nums1[i];
//         }

//         for(int i=nums.size()-2;i>=0;i--){
//             nums2[i]= nums2[i+1]+nums2[i];
//         }


//         int ans=-1;
//         for(int i=0;i<nums.size();i++){
//             if(nums1[i]==nums2[i]){
//                 ans = i;
//                 break;
//             }
//         }
//         return ans;

//     }
// };

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
//         int leftsum = 0 , rightsum = 0 , prefix = 0;
//         for(int i = 0 ; i < n ; i++){
//             prefix += nums[i];// add all element in prefix 
//         }
//         rightsum  = prefix ; // make rightsum eqaul to prefix sum
//         for(int j= 0 ; j<n ; j++){
//             leftsum += nums[j]; // add element in leftsum and check if (leftsum==rightsum) at any index before substracting element from rightsum, if find eqaul then return that index 
//             if(rightsum == leftsum) return j;
//             rightsum -= nums[j];

//         }
//         return -1;// means not pivot index find 
//     }
// };

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         for(int i =0;i<n;i++){
//             sum=sum+nums[i];
//         }
//         int ans=0;
//         for(int i=0;i<n;i++){
//             sum=sum-nums[i];
//             if(sum==ans){
//                 return i;
//             }
//             ans=ans+nums[i];
//         }
//         return -1;
//     }
// };