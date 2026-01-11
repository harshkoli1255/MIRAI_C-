#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(target == arr[i] + arr[j]) {
                cout<<"true"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<"false"<<endl;
    
    return 0;
}