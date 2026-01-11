// 1. Take an input from user and print even numbers till number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; // 4
    int i = 2;
    while(i <= n) {
        cout<<i<<endl;
        i += 2;
    }

    return 0;
}
