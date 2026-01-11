#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int num = 1;
    
    vector<vector<int>>nums(n,vector<int>(m,0));


    // for(int i = 0; i < n; i++) {
    //     for (int j= 0; j < m; j++) {
    //         cout<<nums[i][j]<<" ";
    //     } 
    //     cout<<endl;
    // }
    
    int row_st = 0;
    int row_end = n-1;
    int col_st = 0;
    int col_end = m-1;

    while(row_st <= row_end && col_st <=col_end) {

        // top
        for(int j = col_st; j <=col_end; j++) {
            nums[row_st][j] = num++;
        }
        row_st++;

        // right

        for(int i = row_st; i <= row_end; i++) {
            nums[i][col_end] = num++;
        }
        col_end--;
        
        // bottom

        for(int j = col_end; j >= col_st;j--) {
            if(row_st == row_end) {
                break;
            }
            nums[row_end][j] = num++;
        }
        row_end--;

        // left
        for(int i = row_end; i >= row_st; i--) {
            if(col_st == col_end) {
                break;
            }
            nums[i][col_st] = num++;
        }
        col_st++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}