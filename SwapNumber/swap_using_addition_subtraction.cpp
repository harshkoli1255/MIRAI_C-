#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;

    a = a-b; // a = 2
    b = a+b; // b = 5
    a = b-a; // a = 3

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}