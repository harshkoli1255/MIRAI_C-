#include<iostream>
using namespace std;

void printItN(int i, int n) {
    if(i > n) {
        return;
    }
    cout<<i<<endl;
    printItN(i+1, n);
}

void printNtI(int i, int n) {
    if(i < n) {
        return;
    }
    cout<<i<<endl;
    printNtI(i-1, n);
}

int main(){

    // printItN(2,5);
    printNtI(5,1);

    return 0;
}