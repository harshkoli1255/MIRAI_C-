#include <iostream>
using namespace std;

// Simple examples of functions
void printName() {
    cout << "Satyam" << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    // Call the functions
    printName();
    cout << sum(5, 7) << endl;
    return 0;
}