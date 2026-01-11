#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector<vector<int>>mat(n, vector<int>(n,0));
    int srow = 0;
    int erow = n-1;
    int scol = 0;
    int ecol = n-1;

    int num = 1;

    while(srow <= erow && scol <= ecol) {
        // top
        for(int j = 0; j <= ecol; j++) {
            mat[srow][j] = num;
            num++;
        }
        srow++;

        // right
        for (int i = srow; i <= erow; i++) {
            mat[i][ecol] = num;
            num++;
        }
        ecol--;

        // bottom
        for(int j = ecol; j >= scol; j--) {
            if(srow == erow) {
                break;
            }
            mat[erow][j] = num;
            num++;
        }

        erow--;

        // left

        for(int i = erow; i >= srow; i--) {
            if(scol == ecol) {
                break;
            }
            mat[i][scol] = num;
            num++;
        }
        scol++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<setw(2)<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}