#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    int sum = n*(n+1)/2;
    int arry_sum = 0;
    for (int i = 0; i < n-1; i++) {
        cin>>arr[i];
        arry_sum += arr[i];
    }

    cout<<sum-arry_sum<<endl;
    return 0;
}