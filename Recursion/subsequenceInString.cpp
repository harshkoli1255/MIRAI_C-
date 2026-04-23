#include <iostream>
#include<vector>
using namespace std;

void solve(string &str, string &output, int idx, vector<string> &ans) {
    if(idx >= str.length()) {
        ans.push_back(output);
        return;
    }
    
    // include
    output.push_back(str[idx]);
    solve(str, output, idx+1, ans);

    // exclude
    output.pop_back();
    solve(str, output, idx+1, ans);
}


int main() {
    string str = "abc";
    vector<string>ans;
    string output = "";
    int idx = 0;
    solve(str, output, idx, ans);

    for(auto &i : ans) {
        if(i.length() == 0) cout<<"''";
        else {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
