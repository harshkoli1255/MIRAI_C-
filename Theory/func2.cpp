#include<iostream>
using namespace std;

void show(int a, char b) {
    cout<<a<<" "<<b<<endl;
}

void show(char a, int c) {
    cout<<a<<" "<<c<<endl;
}

void sum(int a, int b = 0) {
    cout<<a+b<<endl;
}

// void sum(int a = 0, int b) { // Error: redefinition of 'sum' use start default argument from right to left
//     cout<<a+b<<endl;
// }

// Differenet dataType
int main() {

    show(84,'S');
    // show('S',3);
    sum(4);
    return 0;
}
// funtion of same name but different arguments is called function 

// Note: Funtion with same name but different datatype it is not overloading