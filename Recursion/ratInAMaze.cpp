#include<iostream>
using namespace std;

void ratIAMazre(int i, int j, int n, vector<vector<int>>&maze, vector<vector<int>>&visit, vector<string>&ans, string move) {
    if(i == n-1 && j == n-1) {
        ans.push_back(move);
        return;
    }
    // downward
    visit[i][j] = 1;
    if(i+1 < n && !visit[i+1][j] && maze[i+1][j] == 1) {
        visit[i+1][j] = 1;
        ratIAMazre(i+1, j, n, maze, visit, ans, move + 'D');
        visit[i+1][j] = 0;
    }

    // left
    if(j-1 >=0 && !visit[i][j-1] && maze[i][j-1] == 1) {
        visit[i][j-1] = 1;
        ratIAMazre(i, j-1, n, maze, visit, ans, move + 'L');
        visit[i][j-1] = 0;
    }

    // right
    if(j+1 < n && !visit[i][j+1] && maze[i][j+1] == 1) {
        visit[i][j+1] = 1;
        ratIAMazre(i, j+1, n, maze, visit, ans, move + 'R');
        visit[i][j+1] = 0;
    }
    
    // up
    if(i-1 >= 0 && !visit[i-1][j] && maze[i-1][j] == 1) {
        visit[i-1][j] = 1;
        ratIAMazre(i-1, j, n, maze, visit, ans, move + 'U');
        visit[i-1][j] = 0;
    }
    visit[i][j] = 0;
}
int main(){
    vector<vector<int>>maze = {{1, 0, 0, 0},{1, 1, 0, 1},{1, 1, 0, 0},{0, 1, 1, 1}};
    int n = maze.size();
    vector<vector<int>> visit(n, vector<int>(n, 0));
    vector<string>ans;
    string move;
    
    ratIAMazre(0, 0, n, maze, visit, ans, "");
    for(auto &i : ans) {
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}