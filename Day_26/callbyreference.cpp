#include<iostream>
using namespace std;

void update(int &a){ // passed it as a reference
    // no new bucket of a created , it will use the same bucket
    a = a*10;  // 140 - it makes a as 140 in new bucket only

    cout<<"inside func"<<a<<endl;  // 140 
}
int main()
{
    int a = 14;  //original value
    cout<<"before update "<<a<<endl;  // 14

    update(a);

    cout<<"after update"<<a<<endl;   // 140
}