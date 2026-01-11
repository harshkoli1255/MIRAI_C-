#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 3, 5, 8, 2, 7, 7};
    int size = sizeof(a)/sizeof(a[0]);

    int lar = INT_MIN;
    int second_lar = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if(a[i] > lar) {
            second_lar = lar; // Update second largest first
            lar = a[i]; // Then Update largest
        }
        else if(a[i] > second_lar && a[i] != lar) {
            second_lar = a[i];
        }
    }

    cout<<"Largest: "<<lar<<endl;
    cout<<"Second Largest: "<<second_lar<<endl;
    
    return 0;
}