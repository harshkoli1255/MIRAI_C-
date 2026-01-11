#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;

    a = a^b; 
    b = a^b;
    a = a^b;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}