#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    if(x >1){
    int x = 10;
    //x = 10;  // it will update x = 5 bucket
  cout<<x<<endl; // 10 block bucket is present so it will change only

    }
    cout<<x<<endl; //5 
}