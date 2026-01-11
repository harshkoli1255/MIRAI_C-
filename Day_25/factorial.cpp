#include<iostream>
using namespace std;

int factorial (int n){
    int ans = 1;
    //factorial in answer bucket
    for(int i = 2 ; i <= n ; i++){
        ans = ans * i;
    }
    return ans;
}

int main()
{
    cout<<factorial(5);

    return 0;
}
