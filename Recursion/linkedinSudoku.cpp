#include<iostream>
using namespace std;

bool isSafe(vector<vector<int>> sudoku, int n, int digit, int row, int col) {
    // horizonrtally
    for(int j = 0; j < n; j++) {
        if(sudoku[row][j] == digit) {
            return false;
        }
    }
    // vertically
    for(int i = 0; i < n; i++) {
        if(sudoku[i][col] == digit) {
            return false;
        }
    }
    int sr = (row/2)*2;
    int sc = (col/3)*3;

    // grid
    for(int i = sr; i < sr+2; i++) {
        for(int j = sc; j < sc+3; j++) {
            if(sudoku[i][j] == digit) {
                return false;
            }
        }
    }
    return true;

}

bool sudokuSolver(vector<vector<int>>&sudoku, int n, int row, int col) {
    if(row == n) {
        return true;
    }
    int nextRow = row, nextCol = col+1;
    if(col+1 == 6) {
        nextRow = row+1;
        nextCol = 0;
    }
    if(sudoku[row][col] != 0) { 
        return sudokuSolver(sudoku, n, nextRow, nextCol);
    }
    for(int digit = 1; digit <= 6; digit++) {
        if(isSafe(sudoku, n, digit, row, col)) {
            sudoku[row][col] = digit;
            if(sudokuSolver(sudoku, n, nextRow, nextCol)) {
                return true;
            }
            sudoku[row][col] = 0;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> sudoku = {
        {0, 0, 0, 4, 0, 0},
        {0, 0, 3, 5, 2, 0},
        {0, 2, 4, 0, 3, 6},
        {1, 3, 0, 2, 4, 0},
        {0, 6, 5, 3, 0, 0},
        {0, 0, 2, 0, 0, 0}
    };
    // 6x6
    int n = sudoku.size();
    sudokuSolver(sudoku, n, 0, 0);

    for(auto &i : sudoku) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}