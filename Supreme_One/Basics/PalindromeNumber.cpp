

// By reversing number and comparing the original with reverse

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || (x > 0 && x % 10 == 0)) {
      return false;
    }

    int original = x;
    long reversed = 0;

    while (x > 0) {
      reversed = reversed * 10 + x % 10;
      x = x / 10;
    }

    return reversed == original;
  }
};

//  By converting the number to string.
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0){
//             return false;
//         }
//         std::string numStr = std::to_string(x);
//         int low = 0;
//         int high = numStr.length()-1;
//         while(low<high){
//             if(numStr[low]!=numStr[high]){
//                 return false;
//             }
//             low++;
//             high--;
//         }
//         return true;
//     }
// };