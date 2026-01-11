#include<iostream>
using namespace std;
int main(){
    int arr[] = {0, 0, 1, 0, 1, 0};
    int size = sizeof(arr)/sizeof(int);
    
    int count = 1;
    int maxi = 0;

    for (int i = 0; i < size-1; i++) {
        if(arr[i] == arr[i+1]) {
            count++;
        }
        else {
            if(count > maxi) {
                maxi = count;
            }
            count = 1;
        }
    }
    
    if(count > maxi) {
        maxi = count;
    }
    cout<<maxi<<endl;
    
    return 0;
}