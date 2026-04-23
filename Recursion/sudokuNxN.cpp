#include <iostream>
#include <vector>
#include <cmath>
#include<iomanip>
using namespace std;

bool isSafe(vector<vector<int>>&sudoku,int digit, int row, int col, int n) {
    for(int j = 0; j < n; j++) {
        if(sudoku[row][j] == digit) {
            return false;
        }
    }
    for(int i = 0; i < n; i++) {
        if(sudoku[i][col] == digit) {
            return false;
        }
    }
    int n1 = sqrt(n);
    
    int sr = (row/n1)*n1;
    int sc = (col/n1)*n1;

    for(int i = sr; i < sr+n1; i++) {
        for(int j = sc; j < sc+n1; j++) {
            if(sudoku[i][j]== digit) {
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<int>>&sudoku, int n,  int row, int col) {
    if(row == n) {
        return true;
    }
    int nextRow = row, nextCol = col+1;
    
    if(nextCol ==n) {
        nextCol = 0;
        nextRow = row+1;
    }
    if(sudoku[row][col] != 0) {
        return solve(sudoku, n, nextRow, nextCol);
    }
    for(int digit = 1; digit <= n; digit++) {
        if(isSafe(sudoku,digit, row, col, n)) {
            sudoku[row][col] = digit;
            if(solve(sudoku, n, nextRow, nextCol)) {
                return true;
            }
            sudoku[row][col] = 0;
        }
    }
    return false;
} 

int main() {
    vector<vector<int>> sudoku = {
        {0,0,0,4,0,8,0,0,0,0,12,0,0,0,0,16},
        {0,7,0,0,0,0,3,0,0,10,0,0,5,0,0,0},
        {0,0,12,0,0,0,0,16,4,0,0,0,0,0,2,0},
        {0,0,0,0,6,0,0,0,0,0,0,9,0,13,0,0},

        {0,0,5,0,0,0,0,1,0,0,0,0,9,0,0,0},
        {0,0,0,0,10,0,0,0,0,6,0,0,0,0,0,3},
        {0,0,0,9,0,0,0,0,0,0,0,5,0,0,0,0},
        {11,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0},

        {0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,9},
        {0,0,0,0,0,0,0,6,0,0,0,0,3,0,0,0},
        {0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0},

        {0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0},
        {0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };
    int n = sudoku.size();
    solve(sudoku, n, 0, 0);
    
    for(auto &i : sudoku) {
        for(auto &j : i) {
            cout<<setw(3)<<j;
        }
        cout<<endl;
    }
    return 0;
}