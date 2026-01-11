#include<iostream>
using namespace std;
int main(){
    // check weather number present in array or not if present -> return index return -1
    
    int size;
    cout<<"Size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" Elements: ";
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    int ans = -1;
    
    for (int i = 0; i < size; i++){
        if(arr[i] == target) {
            ans = i;
        }
    }
    cout<<ans<<endl;
    

    return 0;
}