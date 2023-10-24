//Explore all possible ways 
// Explore all possible ways

#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int solve(vector<int> &coins, int amount) {
  if (amount == 0) {
    return 0;
  }

  int mini = INT_MAX;
  int ans = INT_MAX;

  for (int i = 0; i < coins.size(); i++) {
    int coin = coins[i];
    if (coin <= amount) {
      int recAns = solve(coins, amount - coin);
      if (recAns != INT_MAX) {
        ans = 1 + recAns;
      }
    }
    mini = min(mini, ans);
  }
  return mini;
}

int coinChange(vector<int> &coins, int amount) {
  int ans = solve(coins, amount);

  if (ans == INT_MAX) {
    return -1;
  } else {
    return ans;
  }
}
int main() {

  vector<int> coins;

  coins.push_back(1);
  coins.push_back(2);
  coins.push_back(5);
  int amount = 11;
  int ans = coinChange(coins, amount);
  cout << "ANS:" << ans << endl;
  return 0;
}