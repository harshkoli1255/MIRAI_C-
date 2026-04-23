#include<iostream>
#include<vector>
using namespace std;

void permutation(string str, int n, vector<bool>&taken, vector<string>&ans, string p) {
    if(p.length() == n) {
        ans.push_back(p);
        return;
    }

    for(int i = 0; i < n; i++) {
        if(!taken[i]) {
            p.push_back(str[i]);
            taken[i] = true;
            permutation(str, n, taken, ans, p);
            p.pop_back();
            taken[i] = false;
        }
    }
}

int main(){
    string str = "abc";
    int n = str.length();
    vector<bool>taken(n);
    vector<string>ans;
    permutation(str, n, taken, ans, "");

    for(auto &i : ans) {
        cout<<i<<endl;
    }
    return 0;
}