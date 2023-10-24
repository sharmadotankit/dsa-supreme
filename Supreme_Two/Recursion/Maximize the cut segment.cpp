#include <iostream>
#include <limits.h>

using namespace std;

int maximizeCuts(int n, int x, int y, int z) {

  if (n == 0) {
    return 0;
  }

  if (n < 0) {
    return INT_MIN;
  }

  int option1 = 1 + maximizeCuts(n - x, x, y, z);
  int option2 = 1 + maximizeCuts(n - y, x, y, z);
  int option3 = 1 + maximizeCuts(n - z, x, y, z);

  int finalAns = max(option1, max(option2, option3));
  return finalAns;
}

int main() {
  int n = 4;
  int x = 2;
  int y = 1;
  int z = 1;
  int ans = maximizeCuts(n, x, y, z);
  cout << "Ans : " << ans;
  return 0;
}
