#include<iostream>
using namespace std;
// void find(int n, vector<string>&p, vector<vector<string>>&ans) {
//     if(n == 0) {
//         ans.push_back(p);
//         return;
//     }
//     p.push_back("H");
//     find(n-1,p,ans);
//     p.pop_back();

//     p.push_back("T");
//     find(n-1,p,ans);
//     p.pop_back();
// }
void find(int n, vector<string>&p, vector<vector<string>>&ans) {
    if(p.size()==n) {
        ans.push_back(p);
        return;
    }
    p.push_back("H");
    find(n, p, ans);
    p.pop_back();

    p.push_back("T");
    find(n, p, ans);
    p.pop_back();
}
int main(){
    int n = 3;
    vector<string>p;
    vector<vector<string>>ans;
    find(n,p,ans);
    
    for (auto &row : ans) {
        for (auto element : row) {
            cout << element << " ";
        }
        cout<<endl;
    }

    return 0;
}