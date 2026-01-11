#include<iostream>
using namespace std;

int main()
{
    int x = 15;
    int a = 5;
    int b = 5;
    ++x;

    if(x > 15){
        int a = 21;
        a++;
        cout<<a<<endl;  //22
        b = 23;
        cout<<b<<endl;  //upper b becomes 23
        b--;
        a++;
    }

    cout<<a<<endl;  //5
    cout<<b<<endl; //22
    return 0;
}