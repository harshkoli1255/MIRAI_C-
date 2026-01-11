#include<iostream>
using namespace std;
int main(){
    // #include -> Pre processor Directive
    int a = 5;
    int b = 7;

    cout<<(a / b)<<endl;
    cout<<(a % b)<<"\t";
    cout<<(a + b)<<endl;

    cout<<sizeof(a)<<endl; // 4 bytes

    return 0;
}