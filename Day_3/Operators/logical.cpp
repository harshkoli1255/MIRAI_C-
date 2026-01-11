#include<iostream>
using namespace std;
int main() {
    int a, b;
    // cin>>a>>b;
    a = 5;
    b = 7;

    cout<<boolalpha<<(a>=5 && b>=7)<<endl;
    cout<<boolalpha<<(a>5 || b>=7)<<endl;
    cout<<(a>b)<<endl;
    cout<<!(a>b)<<endl;
    return 0;
}