#include<iostream>
using namespace std;

int sumtoN(int n) {
    if(n==1) {
        return n;
    }
    return n+sumtoN(n-1);
}
int main(){

    cout<<sumtoN(5)<<endl;
    
    return 0;
}