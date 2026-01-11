#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    if(marks >= 90) {
        cout<<"A"<<endl;
    }
    else if(80 <= marks && marks < 90) {
        cout<<"B"<<endl;
    }
    else if(70 <=marks && marks <80) {
        cout<<"C"<<endl;
    }
    else if(50 <= marks && marks< 70) {
        cout<<"D"<<endl;
    }
    else {
        cout<<"Fail"<<endl; // execute only when all upper 4 
    }
    return 0;
}