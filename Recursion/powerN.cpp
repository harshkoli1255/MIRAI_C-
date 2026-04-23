#include<iostream>
using namespace std;
// int power(int x, int n) {
//     if(n == 0) return 1;

//     return x * power(x, n-1);
// }


// now Optimise
int optimisePower(int x, int n) {
    if(n == 0) return 1;

    int halfPow = optimisePower(x, n/2);
    if(n%2!=0) {
        return x*halfPow*halfPow;
    }
    return halfPow*halfPow;
}

int main(){
    int x = 2;
    int n = 10;
    cout<<optimisePower(x,n)<<endl;
    return 0;
}