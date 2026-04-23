#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void solve(string num, int idx, vector<string>&ans, int n, string p, unordered_map<char, string>&mp) {
    if(idx >= n) {
        ans.push_back(p);
        return;
    }
    char digit = num[idx];
    string str = mp[digit];
    for(int i = 0; i < str.length(); i++) {
        p.push_back(str[i]);
        solve(num, idx+1, ans, n, p, mp); 
        p.pop_back();
    }
}

int main(){
    string num = "23";
    int n = num.length();
    vector<string>ans;
    unordered_map<char, string>mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    solve(num, 0, ans, n, "", mp);

    for(auto &i : ans) {
        cout<<i<<endl;
    }
    return 0;
}