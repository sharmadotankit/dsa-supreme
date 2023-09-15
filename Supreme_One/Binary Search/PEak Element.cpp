// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
// public:
//   int findPeakElement(vector<int> &nums) {
//     if (nums.size() == 1) {
//       return 0;
//     }
//     if (nums.size() == 2) {
//       if (nums[0] > nums[1]) {
//         return 0;
//       } else {
//         return 1;
//       }
//     }
//     int start = 0;
//     int end = nums.size() - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end) {
//       if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
//         return mid;
//       } else {
//         if (nums[mid - 1] < nums[mid] && nums[mid + 1] > nums[mid]) {
//           start = mid + 1;
//         } else {
//           end = mid;
//         }
//       }
//       mid = start + (end - start) / 2;
//     }
//     return -1;
//   }
// };