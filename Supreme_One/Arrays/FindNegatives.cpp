
// // 1351. Count Negative Numbers in a Sorted Matrix
// // Binary Search
// class Solution {
// public:
//   int countNegatives(vector<vector<int>> &grid) {
//     int n = grid.size();
//     int m = grid[0].size();
//     int res = 0;
//     int i = 0;
//     int j = m - 1;
//     while (i < n && j >= 0) {
//       if (grid[i][j] < 0) {
//         j--;
//         res += n - i;
//       } else
//         i++;
//     }
//     return res;
//   }
// };

// // Using double For  loop
// class Solution {
// public:
//   int countNegatives(vector<vector<int>> &grid) {
//     int ans = 0;
//     for (int i = 0; i < grid.size(); i++) {
//       for (int j = grid[0].size() - 1; j >= 0; j--) {
//         if (grid[i][j] < 0) {
//           ans++;
//         } else {
//           break;
//         }
//       }
//     }
//     return ans;
//   }
// };