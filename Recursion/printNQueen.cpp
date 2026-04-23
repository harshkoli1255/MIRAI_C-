#include<iostream>
using namespace std;

void placeQueen(vector<string>&board, vector<vector<string>>&ans, int n, int i) {
    if(i==n) {
        ans.push_back(board);
        return;
    }
    for(int j = 0; j < n; j++) {
        board[i][j] = 'Q';
        placeQueen(board, ans, n, i+1);
        board[i][j] = '.';
    }
}
int main(){
    int n = 2;
    vector<string>board(n, string(n, '.'));
    vector<vector<string>>ans;
    placeQueen(board, ans, n, 0);

    for(auto &i : ans) {
        for(auto &j : i) {
            for(auto &k : j) {
                cout<<k<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}