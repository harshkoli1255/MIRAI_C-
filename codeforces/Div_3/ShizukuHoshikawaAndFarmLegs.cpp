#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
    
        if(n%2!=0) {
            cout<<0<<endl;
            continue;
        }
    
        int cowsLegs = n/4;
    
        int maxCows = cowsLegs +1;
    
        cout<<maxCows<<endl;
    }

    return 0;
}
