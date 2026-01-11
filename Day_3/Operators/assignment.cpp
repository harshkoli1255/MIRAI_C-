#include<iostream>
using namespace std;
int main(){
    // 1. =, example: a = 5;
    // 2. =, example: a += 5;
    // 3. =, example: a -= 5;
    // 4. =, example: a *= 5;

    int a = 6;
    cout<<a<<endl;
    a += 7; // a = a + 7;
    cout<<a<<endl;
    a -= 3; // a = a - 7;
    cout<<a<<endl; // a = 10;
    a *= 2; // a = a * 2;

    return 0;
}