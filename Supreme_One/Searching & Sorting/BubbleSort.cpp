// #include <iostream>
// #include <limits.h>
// #include <vector>

// using namespace std;

// int main() {
//   vector<int> nums = {4, 3, 2, 6, 1, 4, 7, 8};
//   bool isSwapped = false;
//   for (int i = 0; i < nums.size(); i++) {
//     for (int j = 0; j < nums.size()-1-i; j++) {
//       if(nums[j]>nums[j+1]){
//         isSwapped = true;
//         swap(nums[j], nums[j+1]);
//       }
//     }

//     if(!isSwapped){
//       break;
//     }
//   }

//   for (auto val : nums) {
//     cout << val << " ";
//   }
// }