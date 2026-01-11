#include<iostream> 

using namespace std; 

// true or false - if n prime then it will return true 

bool checkPrime(int n){ 

    if(n == 2){ 
        return true; 
    } 

    // get a factor 2 

    if( n % 2 == 0){ 
        return false; 
    } 

    // consider only odd factors skip - 4,6,8,10 

    for(int i = 3 ; i*i<=n ; i+= 2){ 
        if( n % i == 0){ 
            return false; 
        } 
    } 

    return true; 
} 

int main() {
    cout<<checkPrime(7)<<endl;
    return 0;
}