#include <iostream>
#include <vector>

using namespace std;

// Function to handle all possibility
// - path closed
// - out of bound
// - check is pos is already visited
bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row,
            int col, vector<vector<bool>> visited) {
  if (maze[newx][newy] == 1 && (newx >= 0 && newx <= row) &&
      (newy >= 0 && newy <= col) && visited[newx][newy] == false) {
    return true;
  } else {
    return false;
  }
}

void printAllPath(int maze[][4], int row, int col, int srcx, int srcy,
                  string &output, vector<vector<bool>> &visited) {
  // base case

  if (srcx == row - 1 && srcy == col - 1) {
    cout << output << endl;
    return;
  }
  // up
  int newx = srcx - 1;
  int newy = srcy;
  if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
    // markVisited
    visited[newx][newy] = true;
    output.push_back('U');
    // call recursion
    printAllPath(maze, row, col, newx, newy, output, visited);
    // backtracking
    output.pop_back();
    visited[newx][newy] = false;
  }

  // right
  newx = srcx;
  newy = srcy + 1;
  if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
    // markVisited
    visited[newx][newy] = true;
    output.push_back('R');
    // call recursion
    printAllPath(maze, row, col, newx, newy, output, visited);
    // backtracking
    output.pop_back();
    visited[newx][newy] = false;
  }

  // left
  newx = srcx;
  newy = srcy - 1;
  if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
    // markVisited
    visited[newx][newy] = true;
    output.push_back('L');
    // call recursion
    printAllPath(maze, row, col, newx, newy, output, visited);

    // backtracking
    output.pop_back();
    visited[newx][newy] = false;
  }

  // down
  newx = srcx + 1;
  newy = srcy;
  if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
    // markVisited
    visited[newx][newy] = true;
    output.push_back('D');
    // call recursion
    printAllPath(maze, row, col, newx, newy, output, visited);
    // backtracking
    output.pop_back();
    visited[newx][newy] = false;
  }
}

int main() {
  int maze[4][4] = {
  {1, 0, 0, 0}, 
  {1, 1, 0, 0}, 
  {1, 1, 1, 0}, 
  {1, 1, 1, 1}};

  int row = 4;
  int col = 4;

  int srcx = 0;
  int srcy = 0;
  string output = "";

  // create visited array;
  vector<vector<bool>> visited(row, vector<bool>(col, false));
  printAllPath(maze, row, col, srcx, srcy, output, visited);
}