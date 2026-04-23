#include<iostream>
#include<vector>
using namespace std;
void findBS(int n, int lastPlace, vector<string>&p, vector<vector<string>>&ans) {
    if(n == 0) {
        ans.push_back(p);
        return;
    }
    p.push_back("0");
    findBS(n-1, 0, p, ans);
    p.pop_back();

    if(lastPlace == 0) {
        p.push_back("1");
        findBS(n-1, 1, p, ans);
        p.pop_back();
    }
}

int main(){
    int n = 3;
    vector<string>p;
    vector<vector<string>>ans;

    findBS(n, 0, p, ans);

    for(auto &i: ans) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}