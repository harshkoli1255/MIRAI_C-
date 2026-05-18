#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<char>>boxGrid = {
        {'#','.','*','.'},
        {'#','#','*','.'},
    };
    int n = boxGrid.size();
    int m = boxGrid[0].size();

    vector<vector<char>>nums(n, vector<char>(m, '.'));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            nums[i][j] = boxGrid[j][i];
        }
    }
    

    for(vector<char>&i : nums) {
        reverse(i.begin(), i.end());
    }

    for(auto &i: nums) {
        for(auto &j: i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}