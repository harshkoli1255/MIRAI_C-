#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i ;
    for( i = 2; i < n ; i++){
        if(n%i == 0){
            return false;   //return execute hoga waise hi function terminate
        }
    }
   return true;

}

//wiill return either 0 or 1
int main()
{


    bool ans =checkPrime(17);  // output 0 and 1  --- store the output in x
    if(ans==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


    return 0;
}