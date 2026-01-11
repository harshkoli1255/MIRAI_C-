#include<iostream>
#include <iomanip>
#include<vector>
using namespace std;

void move(vector<int>& grid, int n, int& r_start, int& c_start, int& num, int dir, int count, vector<int>dr, vector<int>dc) {
    for (int i = 0; i < count && num <= n*n; i++) {
        int new_row = r_start + dr[dir];
        int new_col = c_start + dc[dir];

        if(new_row >= 0 && new_col >=0 && new_row < n && new_col < n) {
            r_start = new_row;
            c_start = new_col;
            grid[r_start*n + c_start] = num++;
        }
        else{
            break;
        }
    }
    
}

int main(){
    int n;
    n = 5;
    vector<int>grid(n*n);

    // Direction arrays: Right(0), Down(1), Left(2), Up(3)
    vector<int>dr = {0, 1, 0, -1};
    vector<int>dc = {1, 0, -1, 0};

    int r_start = 0;
    int c_start = 0;
    int num = 1;

    grid[0] = num++;
    
    // Initial 4 moves: R, D, L, D;
    move(grid, n, r_start, c_start, num, 0, 1, dr, dc); // R(1)
    move(grid, n, r_start, c_start, num, 1, 1, dr, dc); // D(1);
    move(grid, n, r_start, c_start, num, 2, 1, dr, dc); // L(1);
    move(grid, n, r_start, c_start, num, 1, 1, dr, dc); // D(1);
    
    // Repeating pattern: R(n), U(n), R(1), D(n+1), L(n+1), D(1)
    
    int step = 2;
    
    while(num <= n*n) {
        move(grid, n, r_start, c_start, num, 0, step, dr, dc); // R(step)
        move(grid, n, r_start, c_start, num, 3, step, dr, dc); // U(step)
        move(grid, n, r_start, c_start, num, 0, 1, dr, dc); // R(step)
        move(grid, n, r_start, c_start, num, 1, step+1, dr, dc); // R(step)
        move(grid, n, r_start, c_start, num, 2, step+1, dr, dc); // R(step)
        move(grid, n, r_start, c_start, num, 1, 1, dr, dc); // R(step)
        step+=2;
    }

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = grid[i*n+j];
            // cout<<setw(6)<<mat[i][j];
        }
        // cout<<endl;
    }

    int t;
    cin>>t;

    for (int i = 0; i < t; i++){
        int r,c;
        cin>>r>>c;
        cout<<mat[r-1][c-1]<<endl;
    }
    return 0;
}