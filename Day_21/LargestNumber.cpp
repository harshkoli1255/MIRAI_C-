#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(int);
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if(a[i] > largest){
            largest = a[i];
        }
    }
    cout<<largest<<endl;
    

    return 0;
}