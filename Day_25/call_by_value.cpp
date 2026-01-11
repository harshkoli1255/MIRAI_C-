#include<iostream>
using namespace std;
void update(int a){

    //call by value - new bucket will be made for the function
    a = a+ 5;

    cout<<"Inside function "<<a<<endl;  // 10 -2
}

int main(){
    int a = 5; // 
    cout<<"before updating "<<a<<endl;   //5  -1
    update(a);  
    cout<<"after updating "<<a<<endl;    //5  -3  //original value will remain same
    return 0;

}