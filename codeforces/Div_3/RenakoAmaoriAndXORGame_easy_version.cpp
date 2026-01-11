#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>b[i];
        }
        int ans1 = 0;
        int ans2 = 0;

        for (int i = 0; i < n; i++) {
            if((i%2==0)  && a[i] < b[i]) {
                swap(a[i], b[i]);
            }
            if((i%2==1)  && b[i] < a[i]) {
                swap(a[i], b[i]);
            }
        }
        
        int ans1_count = 0;
        int ans2_count = 0;

        for (int i = 0; i < n; i++) {
            ans1 = ans1 ^ a[i];
            ans2 = ans2 ^ b[i];
            if(ans1 == 1) {
                ans1_count++;
            }
            if(ans2 == 1) {
                ans2_count++;
            }
        }

        cout<<"ans1 = "<<ans1<<endl;
        cout<<"ans2 = "<<ans2<<endl;

        if(ans1 == ans2) {
            cout<<"Tie"<<endl;
        }
        else {
            if(ans1%2==0) {
                cout<<"Ajisai"<<endl;
            }
            else {
                cout<<"Mai"<<endl;
            }
        }
    }

    return 0;
}