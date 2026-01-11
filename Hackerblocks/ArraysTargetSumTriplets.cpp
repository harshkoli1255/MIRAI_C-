#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 7, 9, 1, 2, 4, 6, 8, 3};
    int n = sizeof(arr)/sizeof(int);
    int target = 10;
    sort(arr, arr+n);
    for(int i = 0; i < n -2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j +1; k < n; k++) {
                if((arr[i] + arr[j] +arr[k] ) == target) {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    cout<<endl;
                }
            }
        }        
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";  
    }
    cout<<endl;

    return 0;
}