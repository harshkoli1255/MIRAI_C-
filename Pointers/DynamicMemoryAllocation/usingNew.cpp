#include<iostream>
using namespace std;
int main(){
    // Using new keyword 
    // -> Decide on runtime
    
    int *p = new int; // One Block is created in heep memory.
    
    int *p = new int(10); // value assign p to 10. and size of integer 4.
    
    int *p3 = new int[100]; // 100 size array created.

    // In heep memory we manage memory with our self.
    // we use delete keyboard to free the memory.

    // example:
    delete p;
    delete[] p;

    return 0;
}