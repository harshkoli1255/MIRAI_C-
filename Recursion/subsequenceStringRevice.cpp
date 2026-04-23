#include<iostream>
using namespace std;

void solve(string s, int i, int n, string p, vector<string>&ans) {
    if(i >= n) {
        ans.push_back(p);
        return;
    }

    p.push_back(s[i]);
    solve(s, i+1, n, p, ans);
    p.pop_back();
    
    solve(s, i+1, n, p, ans);
}
int main(){
    string s = "abc";
    int n = s.length();

    vector<string>ans;
    solve(s, 0, n, "", ans);

    for(auto &i : ans) {
        cout<<i<<endl;
    }
    return 0;
}