#include<iostream>
using namespace std;
int main(){
    int binNum = 101;
    int ans = 0;
    int pow = 1;

    while(binNum > 0) {
        int rem = binNum%10;
        if(rem ==0 ) {
            binNum /= 10;
            continue;
        }
        ans += rem*pow;
        pow*=2;
        binNum /= 10;
    }
    cout<<ans<<endl;
    
    return 0;
}