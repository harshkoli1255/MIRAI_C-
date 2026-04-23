#include <iostream>
using namespace std;

int nStair(int n) {
    if(n<0){
        return 0;
    }
    if(n==0 || n==1) return 1;
    int ans = 0;
    
    for(int i = 1; i <= n; i++) {
        ans += nStair(n-i);
    }
    return ans;
}

int main() {
    int k = 4;
    cout<<nStair(k)<<endl;
    return 0;
}