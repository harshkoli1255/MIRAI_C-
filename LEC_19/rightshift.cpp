#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int x = a<<1; // right shift - every bit shifted to its right position and first bit will be removed insert 0 in last
    cout<<x<<endl;
    // cout<<(x>>1)<<endl;
    return 0;
}