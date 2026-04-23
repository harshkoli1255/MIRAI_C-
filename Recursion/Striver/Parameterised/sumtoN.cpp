#include<iostream>
using namespace std;

void printSumToN(int i, int sum) {
    if(i < 1) {
        cout<<sum<<endl;
        return;
    }
    printSumToN(i-1, sum+i);
}
int main(){
    printSumToN(5,0);
    return 0;
}