#include<iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();  // will not ignore spaces , tabs , next line
    int cnt = 0;

    while(ch != '$'){
        cnt++;
        ch = cin.get();
    }
    cout<<cnt<<endl;

    return 0;
}