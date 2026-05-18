#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool isPossible(long long n, long long d, long long i,unordered_set<long long>&visit) {
    if(i > n) {
        return false;
    }
    if(i == n) {
        return true;
    }

    if(visit.count(i) > 0) return false;
    visit.insert(i);

    return isPossible(n, d, i+d, visit) || isPossible(n, d, 2*i, visit);
}
int main(){
    int t;
    cin>>t;

    while(t--) {
        long long n, d;
        cin>>n>>d;
        unordered_set<long long>visit;
        
        if(isPossible(n, d, 1, visit)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}