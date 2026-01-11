#include<iostream>
using namespace std;
int main(){
    int a[5] = {1, 3, 5, 6, 2};
    int size = sizeof(a)/sizeof(int);

    bool is_sorted = true;
    for (int i = 0; i < size-1; i++) {
        if(a[i] > a[i+1]){
            is_sorted = false;
            return 0;
        }
    }
    
    cout<<is_sorted<<endl;
    return 0;
}