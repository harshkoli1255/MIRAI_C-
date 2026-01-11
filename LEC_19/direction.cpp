#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch = cin.get();
    int x = 0 ; // initial coordinates
    int y = 0;
    while( ch != '\n'){
        if(ch == 'N'){
            y++;
        }
        else if(ch == 'S'){
            y--;
        }
        
        else if(ch == 'E'){
            x++;
        }
        else{
            x--;
        }
        ch = cin.get();
    }
    // Directions x, y ko check krke

    // E N S W

    if( x >= 0){
        for(int i = 1; i <= x ; i++){
            cout<<'E';
        }
    }

    // lexographically - according to dictonary c , de
    if(y >= 0){
        for(int i = 1 ; i <= y ; y++){
            cout<<'N';
        }
    }

    else{
        y = -y; // y is negative
        for(int i = 1 ; i <= y ; i++){
            cout<<'S';
        }
    }

    if(x < 0){
        x = -x;
        for(int i = 1; i <= x ; i++){
            cout<<'W';
        }
    }

    return 0;
}