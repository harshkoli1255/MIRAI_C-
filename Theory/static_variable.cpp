#include<iostream>
using namespace std;

void fun() {
   static int cnt = 0;
    cnt++;
    cout<<cnt<<endl;
}
int main() {
    
    fun();
    fun();
    fun();
    return 0;
} // static variable if only make 1 bucket 