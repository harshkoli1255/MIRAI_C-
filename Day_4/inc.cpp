#include<iostream>
using namespace std;
int main(){
    int a = 7;
    int b = 8;
    
    int part1 = a++;
    int part2 = --a;
    int part3 = a--;

    // cout << a++ + --a + a--<<endl;
    cout << part1 + part2 + part3<<endl;
    return 0;
}