#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    
    stack<int>s2;
    s2.push(5);
    s2.push(6);
    s2.push(7);

    s2.swap(s1);

    // cout<<"Size of s1: "<<s1.size()<<endl;
    // cout<<"Size of s2: "<<s2.size()<<endl;

    cout<<s2.top()<<endl;

    return 0;
}