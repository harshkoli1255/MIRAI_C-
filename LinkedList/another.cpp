#include<iostream>
#include<unordered_map>
using namespace std;

void solve(string digit, vector<string>&ans, string &temp, unordered_map<char, string>&mp, int n, int j)  {
    if(temp.size() == n) {
        ans.push_back(temp);
        return;
    }
    string pick = mp[digit[j]];
    for(int i = 0; i < pick.length(); i++) {
        temp.push_back(pick[i]);
        solve(digit, ans, temp, mp, n, j+1);
        temp.pop_back();
    }
}
int main(){
    string digit = "23";
    int n = digit.size();
    vector<string>ans;
    string temp;
    unordered_map<char, string>mp;

    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    solve(digit, ans, temp, mp, n, 0);

    for(auto &i : ans) {
        for(auto &j: i) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}