#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat = {{1,2,3},{4, 5, 6}, {7, 8, 9}};
    int n = mat.size();
    

    for(int j = 0; j < n; j++) {
        if(j%2==0) {
            for(int i = 0; i < n; i++) {
                cout<<mat[i][j]<<" ";
            }
        }
        else {
            for(int i = n-1; i >= 0; i--) {
                cout<<mat[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}