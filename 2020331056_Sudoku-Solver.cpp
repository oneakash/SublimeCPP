// Reg No: 2020331056

#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

void printGrid(const vector<vector<int>>& grid) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
    cout << "-------------------" << endl;
}

bool isSafe(const vector<vector<int>>& grid, int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>>& grid, int step = 0) {
    int row, col;
    bool isEmpty = false;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    if (!isEmpty) {
        cout << "Final solved grid:" << endl;
        printGrid(grid);
        return true;
    }

    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            cout << "Step " << step + 1 << ": Placing " << num << " at (" << row + 1 << ", " << col + 1 << ")" << endl;
            printGrid(grid);

            if (solveSudoku(grid, step + 1)) {
                return true;
            }
            grid[row][col] = 0;
            cout << "Backtracking from (" << row + 1 << ", " << col + 1 << ")" << endl;
            printGrid(grid);
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    cout << "Initial Sudoku grid:" << endl;
    printGrid(grid);
    if (solveSudoku(grid)) {
        cout << "Sudoku solved successfully!" << endl;
    } else {
        cout << "No solution exists for the given Sudoku." << endl;
    }
    return 0;
}
