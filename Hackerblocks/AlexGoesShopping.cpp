#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);

    for(int i =0; i < n; i++) {
        cin>>prices[i];
    }

    int t;
    cin>>t;

    while(t--) {
        int p, k;
        cin>>p>>k;

        int count = 0;
        for(int i = 0; i < n; i++) {
            if(p % prices[i] ==0) {
                count++;
            }
        }
        if(count >= k) {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}