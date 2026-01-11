#include<iostream>
using namespace std;

void show(int a) {
    cout<<a<<endl;
}

void show(int a, int b) {
    cout<<a<<" "<<b<<endl;
}

int main() {
    show(3);
    show(3,4); // compliler will decide which function to call based on the arguments.
    return 0;
}