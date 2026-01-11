#include<iostream>
using namespace std;

void printDes(int n) {
    if(n==1) {
        cout<<n<<endl;
        return;
    }
    cout<<n<<" ";
    printDes(n-1);
}
int main(){
    int n = 10;
    printDes(n);
    return 0;
}