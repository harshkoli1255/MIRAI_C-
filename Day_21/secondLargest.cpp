#include<iostream>
using namespace std;
int main(){
    // int a[] = {5, 2, 7, 3, 9, 9};
    // int size = sizeof(a)/sizeof(int);
    // int largest = INT_MIN;

    // for (int i = 0; i < size; i++) {
    //     if(a[i] > largest){
    //         largest = a[i];
    //     }
    // }
    // cout<<"Largest: "<<largest<<endl;
    
    // for (int i = 0; i < size; i++){
    //     if(a[i] == largest) {
    //         a[i] = 0;
    //     }
    // }
    
    // largest = INT_MIN;
    // for (int i = 0; i < size; i++) {
    //     if(a[i] > largest){
    //         largest = a[i];
    //     }
    // }
    // cout<<"Second Largest: "<<largest<<endl;

    int a[] = {1, 3 ,5, 8, 2, 9, 7};
    int size = sizeof(a)/sizeof(int);
    int largest1 = INT_MIN;
    int largest2 = INT_MIN;
    for (int i = 0; i < size; i++) {
        if(a[i] > largest1){
            largest1 = a[i];
        }
    }
    
    for (int i = 0; i < size; i++) {
        if(a[i] > largest2 && a[i]!= largest1){
            largest2 = a[i];
        }
    }

    cout<<largest1<<endl;
    cout<< largest2<<endl;
    
    return 0;
}