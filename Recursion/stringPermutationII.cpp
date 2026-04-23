#include<iostream>
#include<map>
using namespace std;

void solve(string str, int n, map<char, int>&mp, vector<string>&ans, string p) {
    if(p.length() == n) {
        ans.push_back(p);
        return;
    }
    for(auto &it : mp) {
        char c = it.first;
        int count = it.second;
        if(count == 0) {
            continue;
        }
        p.push_back(c);
        mp[c]--;
        solve(str, n, mp, ans, p);
        p.pop_back();
        mp[c]++;
    }
}  
int main(){
    string str = "aab";
    map<char, int>mp;
    for(char c : str) {
        mp[c]++;
    }
    vector<string>ans;
    int n = str.length();
    solve(str, n, mp, ans, "");
    for(auto &perm : ans) {
        cout<<perm<<endl;
    }
    return 0;
}