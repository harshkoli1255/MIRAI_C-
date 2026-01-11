#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i = 2 ; i <= n ; i++){
        ans *= i;
    }
    cout<<ans<<endl;
}
int main(){
    factorial(5);
    return 0;
}