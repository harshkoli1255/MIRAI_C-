#include<iostream>
using namespace std;

int x = 5;  // global variable written outside block
int main()
{

   int x = 10;
   x+=5;
    cout<<x<<endl;

    // if i want to print global variable i have to use(::) operator
    cout<<(::x)<<endl;
    ::x = ::x + 5;
    return 0;

}