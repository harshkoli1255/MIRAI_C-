#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    cin.ignore(); // used to ignore the new line character

    char ch[20];

    cin.getline(ch, 20);

    cout<<ch<<endl;
    
    return 0;
}