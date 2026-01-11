#include<iostream>
using namespace std;
int main(){
    long n1 = 345443;

    int largest1 = INT_MIN;
    int largest2 = INT_MIN;

    while(n1 > 0) {
        int digit = n1%10;
        if(digit > largest1) {
            largest1 = digit;
        }
        if(digit > largest2 && digit!=largest1) {
            largest2 = digit;
        }
        n1 = n1 /10;
    }
    cout<<largest1<<endl;
    cout<<largest2<<endl;
    
    return 0;
}