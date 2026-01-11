#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++){
        cin>>num;
        if(largest < num) {
            largest = num;
        }
    }
    cout<<largest<<endl;
    
    return 0;
}