#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i ;
    for( i = 2; i < n ; i++){
        if(n%i == 0){
            return false;   // return execute hoga waise hi function terminate
        }
    }
   return true;

}

void printPrimes(int n){
    for(int i = 2 ; i <= n ; i++){

        //check every no it is prime or not -  prime then i will print otherwise not print
   
        if(checkPrime(i)){  // it will check for i  i - is prime or not if 1 - then i is prime
            cout<<i<<endl;
        }
    }
}
// wiill return either 0 or 1
int main()
{

   printPrimes(19);
    

    return 0;
}