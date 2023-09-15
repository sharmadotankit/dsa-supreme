// class Solution {
// public:
//   int reverse(int x) {
//     bool isNegative = false;
//     if (x < 0)
//       isNegative = true;
//     x = abs(x);
//     long long reverse = 0;
//     while (x > 0) {
//       reverse = reverse * 10 + x % 10;
//       x = x / 10;
//     }
//     if (isNegative)
//       reverse = -1 * reverse;
//     if (reverse < INT_MIN || reverse > INT_MAX)
//       return 0;
//     return (int)reverse;
//   }
// };