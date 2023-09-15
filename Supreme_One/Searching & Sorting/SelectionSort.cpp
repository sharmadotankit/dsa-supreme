// #include <iostream>
// #include <limits.h>
// #include <vector>

// using namespace std;

// int main() {
//   vector<int> nums = {4, 3, 2, 6, 1, 4, 7, 8};
//   for (int i = 0; i < nums.size() - 1; i++) {
//     int minVal = i;
//     for (int j = i + 1; j < nums.size(); j++) {
//       if (nums[j] < nums[minVal]) {
//         minVal = j;
//       }
//     }
//     swap(nums[i], nums[minVal]);
//   }

//   for (auto val : nums) {
//     cout << val << " ";
//   }
// }