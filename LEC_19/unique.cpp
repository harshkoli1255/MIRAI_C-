#include<iostream>
using namespace std;
int main(){
    
    // XOR Property
    // a ^ a = 0
    // 0 ^ a = a

    int n;
    cin>>n;
    int num;
    int ans = 0;
    int i = 1;

    while (i<=n) {
        cin>>num;

        ans = ans^num;
        i++;
    }

    cout<<ans<<endl;
    
    return 0;
}