#include<iostream>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;

    int mat[m][n];
    int  rStart = 0, cStart = 0;
    //  eRow = m, eCol = n, 
    int count = 1 ;

    vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {1, 0}, {0, 1}, {-1,  0}};

    // Initial step size is 1, value of d represents the current direction.
        // for (int step = 1, direction = 0; count <= m * n; step++) {

        int step = 1, direction = 0;
            // direction = 0 -> East, direction = 1 -> South
            // direction = 2 -> West, direction = 3 -> North


            for (int i = 0; i < 6 && count <= m * n; i++) {
                for (int j = 0; j < step && count <= m * n; j++) {
                    // Validate the current position
                    if (rStart >= 0 && rStart < m && cStart >= 0 && cStart < n) {
                        mat[rStart][cStart] = count++;
                    }
                    
                    // Make changes to the current position.
                    rStart += dir[direction][0];
                    cStart += dir[direction][1];
                    
                    if(i == 5){
                        step++; 
                        i=0;

                    }
                        
                    if(i==3){
                        step++;
                        break;
                    }
                    if(i==0 && dir[direction][1]  == 1){
                        break;
                    }
                }
                direction = (direction + 1) % 6;
            }

        // }

        for(int i=0; i<m; i++){
            for (int j = 0; j < n; j++)
            {
                cout<<" "<<mat[i][j]<< " ";
            }
            cout<<endl;
        }
    return 0;
}
