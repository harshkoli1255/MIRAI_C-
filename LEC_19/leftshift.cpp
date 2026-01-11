#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int x = a<<1; // left shift - every bit shifted to its left position and last bit will be removed insert 0 in front
    cout<<x<<endl;
    cout<<(x<<1)<<endl;
    return 0;
}