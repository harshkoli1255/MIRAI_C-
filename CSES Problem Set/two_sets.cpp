#include<iostream>
#include<vector>
using namespace std;


int main(){
    long long n;
    cin>>n;

    vector<long long>a;
    vector<long long>set_a;
    vector<long long>set_b;

    long long i = 0;
    long long sum = (n*(n+1))/2;

    if(sum%2!=0) {
        cout<<"NO"<<endl;
        return 0;
    }

    while(i<n) {
        a.push_back(i+1);
        i++;
    }
    long long t = sum/2;
    long long s = 0;
    long long e = n - 1;

    while(s <= e && t!=0) {
        if(t >= a[e]) {
            t = t - a[e];
            set_a.push_back(a[e]);
            a[e] = -1;
        }
        e--;
    }
    
    // for (int i = 0; i < n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    cout<<"YES"<<endl;
    for (int i = 0; i < n; i++) {
        if(a[i] != -1) {
            set_b.push_back(a[i]);
        }
    }
   
    cout<<set_b.size()<<endl;
    for (int i = 0; i < set_b.size(); i++) {
        cout<<set_b[i]<<" ";
    }
    cout<<endl;

    cout<<set_a.size()<<endl;
    for (int i = 0; i < set_a.size(); i++) {
        cout<<set_a[i]<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}