#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n == 2 || n == 3) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    // Print even numbers first
    int i = 2;
    while(i<=n) {
        cout<<i<<" ";
        i += 2;
    }
    
    // Then print odd numbers
    i = 1;
    while(i<=n) {
        cout<<i<<" ";
        i += 2;
    }
    cout<<endl;

    return 0;
}

// https://cses.fi/problemset/task/1070