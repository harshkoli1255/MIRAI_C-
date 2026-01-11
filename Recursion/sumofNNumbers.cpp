#include<iostream>
using namespace std;
int sumN(int n) { // 2
    if(n==1) {
        return n;
    }
    return n + sumN(n-1);
}
int main(){
    cout<<sumN(4)<<endl;
    
    return 0;
}