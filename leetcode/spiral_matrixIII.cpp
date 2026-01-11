#include<iostream>
using namespace std;

void move(int rows, int cols, int& r_start, int& c_start, int dir, int count, vector<int>dr, vector<int>dc, vector<vector<int>>&result) {
    for(int i = 0; i < count; i++) {
        int new_row = r_start + dr[dir];
        int new_col = c_start + dc[dir];

        if(new_row >=0 && new_row < rows && new_col >=0 && new_col < cols) {
            r_start = new_row;
            c_start = new_col;
            result.push_back({r_start,c_start});
        }
        else{
            break;
        }

    }
}
int main(){
    vector<vector<int>>result;
    int rows = 5;
    int cols = 6;
    int r_start = 1;
    int c_start = 4;
    result.push_back({r_start, c_start});
    // E S WW NN EEE SSS WWWW NNNN

    // R D L U
    vector<int>dc = {1, 0, -1, 0};
    vector<int>dr = {0, 1, 0, -1};

    move(rows, cols, r_start, c_start, 0, 1, dr, dc, result);
    move(rows, cols, r_start, c_start, 1, 1, dr, dc, result);
    move(rows, cols, r_start, c_start, 2, 2, dr, dc, result);
    move(rows, cols, r_start, c_start, 3, 2, dr, dc, result);
    
    int steps  = 2;
    
    while(result.size() < rows*cols && r_start >=0 && r_start < rows && c_start >=0 && c_start < cols) {
        move(rows, cols, r_start, c_start, 0, steps, dr, dc, result);
        move(rows, cols, r_start, c_start, 1, steps, dr, dc, result);
        move(rows, cols, r_start, c_start, 2, steps, dr, dc, result);
        move(rows, cols, r_start, c_start, 3, steps, dr, dc, result);
        steps+=2;
    }

    for (int i = 0; i < rows*cols; i++){
        cout<<"[";
        for(int j = 0; j < 2; j++) {
            cout<<result[i][j];
        }
        cout<<"]";
    }
    
    return 0;
}