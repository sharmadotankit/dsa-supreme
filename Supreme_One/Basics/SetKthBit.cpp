// https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1
// Geeks for Geeks

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// class Solution {
// public:
//   int setKthBit(int N, int K) {
//     // Write Your Code here
//     int valueToAdd = 1;
//     valueToAdd = valueToAdd << K;

//     int ans = N | valueToAdd;
//     return ans;
//   }
// };

//{ Driver Code Starts.
// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int N, K;
//     cin >> N >> K;

//     Solution ob;
//     int ans = ob.setKthBit(N, K);
//     cout << ans << endl;
//   }
//   return 0;
// }
// } Driver Code Ends