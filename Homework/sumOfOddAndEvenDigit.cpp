#include<iostream>
using namespace std;
int main(){
    // Sum of even digit and odd digit

    int n = 216479;
    
    int evenDigitSum = 0;
    int oddDigitSum = 0;
    while(n != 0) {
        int digit = n%10;
        if(digit%2==0) {
            evenDigitSum += digit;
        }
        if(digit%2==1){
            oddDigitSum += digit;
        }
        n = n/10;
    }
    cout<<"Even Digit: "<<evenDigitSum<<endl;
    cout<<"Odd Digit: "<<oddDigitSum<<endl;

    return 0;
}