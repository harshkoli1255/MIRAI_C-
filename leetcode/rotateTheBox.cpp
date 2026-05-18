#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<char>> boxGrid = {
        {'#', '#', '*', '.', '*', '.'},
        {'#', '#', '#', '*', '.', '.'},
        {'#', '#', '#', '.', '#', '.'}
    };

    int n = boxGrid.size();
    int m = boxGrid[0].size();
    
    vector<vector<char>>ans(m, vector<char>(n));
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            ans[i][j] = boxGrid[j][i];
        }
    }
    
    for(auto &i : ans) {
        reverse(i.begin(), i.end());
    }

    // # # #
    // # # #
    // # # #
    // . * #
    // # . *
    // . . .

    for(int j = 0; j < n; j++) {
        for(int i = m-1; i >= 0; i--) {
            if(ans[i][j] == '.') {
                int stoneRow = -1;

                for(int k = i-1; k >=0; k--) {
                    if(ans[k][j] == '*') {
                        break;
                    } else if(ans[k][j] == '#') {
                        stoneRow = k;
                        break;
                    }
                }
                if(stoneRow != -1) {
                    ans[i][j] = '#';
                    ans[stoneRow][j] = '.';
                }
            }
        }
    }
    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}