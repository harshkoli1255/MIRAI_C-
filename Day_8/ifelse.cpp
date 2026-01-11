#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if( age >= 18) {
        cout<<"Adult"<<endl; //confition true then this block will execute
    }
    else{
        cout<<"Not Adult"<<endl; // Condition false
    }
    return 0;
}