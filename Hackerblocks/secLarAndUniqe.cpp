#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    int count = 0;
    int secLar = INT_MIN;

    for (int i = n-2; i >= 0; i--) {
        if(arr[i] != arr[n-1]) {
            secLar = arr[i];
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == secLar) {
            count++;
        }
    }
    if(count == 1) {
        cout<<secLar<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}