#include<iostream>
using namespace std;

void printNtoI(int i, int n) {
    if(i > n) {
        return;
    }
    printNtoI(i+1, n);
    cout<<i<<endl;
}

int main(){
    printNtoI(1,5);
    return 0;
}