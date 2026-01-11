#include<iostream>
using namespace std;
int main(){
    // Given a route containing 4 directions (E, W, N, S), find the shortest path to reach destination

    string path = "WNEENESENNN";


    int x = 0, y = 0;

    for(int i = 0; i < path.length(); i++) {
        char dir = path[i];

        // South
        if(dir == 'S') {
            y--;
        }

        // North
        else if(dir=='N') {
            y++;
        }

        // West
        else if(dir=='W') {
            x--;
        }
        // East
        else if(dir=='E') {
            x++;
        }
    }

    cout<<sqrt(x*x+y*y)<<endl;
    return 0;
}