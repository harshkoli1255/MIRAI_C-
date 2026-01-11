#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int number = n;

    int rev = 0;

    while(n !=0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(number == rev) {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}