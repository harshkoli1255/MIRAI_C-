#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>&mat, int&mini, int&minAns, int n, int m, int row, int col, int target) {
    if(row >= n) {
        int result = abs(mini - target);
        minAns = min(minAns, result);
        // cout<<"mini: "<<mini<<" target: "<<target<<" minAns: "<<minAns<<" result: "<<result<<endl;
        return;
    }

    for(int j = 0; j < m; j++) {
        mini += mat[row][j];
        solve(mat, mini, minAns, n, m, row+1, j, target);
        mini -= mat[row][j];
    }
}

int main(){
    vector<vector<int>>mat {{4,4,7,7,9,1,10,10,1}, {7,9,10,3,2,8,6,1,9}, {2,10,6,5,6,5,1,7,2}, {2,5,4,1,8,1,7,8,8}, {4,10,10,2,1,5,1,6,5}};
    int target = 49;
    int mini = 0;
    int minAns = INT_MAX;
    int n = mat.size();
    int m = mat[0].size();
    solve(mat, mini, minAns, n, m, 0, 0, target);
    cout<<minAns<<endl;
    return 0;
}