#include<iostream>
using namespace std;

double solve(double x, long long n) {
    if(n == 0) {
        return 1.0;
    }
    double half = solve(x, n / 2);
    double ans = half * half;

    if(n%2!=0) {
        ans = ans * x;
    }
    return ans;
}

int main(){
    double x = 1.00000;
    int n = -2147483648;
    long long N = n;

    if(N < 0) {
        cout<<1.0/solve(x, -N)<<endl;
        return 0;
    }
    cout<<solve(x, N)<<endl;
    
    return 0;
}