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

int nCr(int n , int r){
    int x1 = factorial(n);  //n!
    int x2 = factorial(n-r);  //(n-r)!

    int x3 = factorial(r);   //r!


    return x1/(x2*x3);



}


int main()
{
   cout<<nCr(10,2);

    return 0;
}
