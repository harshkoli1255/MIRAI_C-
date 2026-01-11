#include<iostream>
using namespace std;
int main(){
    int *arr = new int[5];

    for(int i = 0; i < 5; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }
    delete[] arr;

    arr = nullptr; // good practice to point to the null pointer
    
    // memory leak -> when we forget to delete the dynamic pointer and point to null. before deleting
    // dagnline while pointer // no double delete -> 

    
    return 0;
}