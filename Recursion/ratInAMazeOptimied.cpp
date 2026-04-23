#include<iostream>
using namespace std;
void ratInAMaze(int i, int j, int n, vector<vector<int>>&maze, vector<vector<int>>&visit, vector<int>&di, vector<int>&dj, string move,vector<string>&ans) {
    if(i == n-1 && j == n-1) {
        ans.push_back(move);
        return;
    }

    string dir = "DLRU";

    for(int idx = 0; idx < 4; idx++) {
        int nexti = i + di[idx];
        int nextj = j + dj[idx];
        if(nexti >= 0 && nextj >=0 && nexti < n && nextj < n && !visit[nexti][nextj] && maze[nexti][nextj] == 1) {
            visit[nexti][nextj] = 1;
            ratInAMaze(nexti, nextj, n, maze, visit, di, dj, move + dir[idx], ans);
            visit[nexti][nextj] = 0;
        }
    }
}
int main(){
    vector<vector<int>>maze = {{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
    int n = maze.size();
    vector<vector<int>>visit(n, vector<int>(n, 0));
    // DLRU
    vector<int>di = {+1, 0,  0, -1};
    vector<int>dj = {0, -1, +1, 0};
    vector<string>ans;
    
    if(maze[0][0] == 1) {
        visit[0][0] = 1;
        ratInAMaze(0, 0, n, maze, visit, di, dj,"",ans);
    }

    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}