#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;  //cin will ignore spaces , tabs , next line
    int cnt = 0;

    while(ch != '$'){

        cnt++;
        cin>>ch;
    }
    cout<<cnt<<endl;

    return 0;
}