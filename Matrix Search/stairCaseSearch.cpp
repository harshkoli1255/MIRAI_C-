#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<vector<int>>mat = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int n = mat.size();
    int m = mat[0].size();

    int row = 0;
    int col = m-1;
    int key = 20;

    while(row < n && col >= 0) {
        if(mat[row][col] == key) {
            cout<<"Key = "<<key<<", Found at "<<"("<<row<<","<<col<<")"<<endl;
            return 0;
        }

        else if(key < mat[row][col]) {
            col--;
        }
        else {
            row++;
        }

    }
    cout<<"Key Not Found"<<endl;
    return 0;
}