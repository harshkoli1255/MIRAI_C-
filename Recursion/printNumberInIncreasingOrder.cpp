#include<iostream>
using namespace std;

void printInc(int n) {
    if(n==1) {
        cout<<n;
        return;
    }
    printInc(n-1);
    
    cout<<n<<" ";
}
int main(){

    printInc(10);
    cout<<endl;
    return 0;
}