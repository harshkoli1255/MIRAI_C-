#include<iostream>
using namespace std;

bool isValid(string&curr) {
    int count = 0;
    int i = 0;
    for(char i : curr) {
        if(i == '(') count++;
        else {
            count--;
            if(count < 0) {
                return false;
            }
        }
    }
    return count==0;
}

void generateParentheses(int n, string &curr, vector<string>&ans) {
    if(curr.length() >= 2*n) {
        if(isValid(curr)) {
            ans.push_back(curr);
        }
        return;
    }
    curr.push_back('(');
    generateParentheses(n, curr, ans);
    curr.pop_back();
    curr.push_back(')');
    generateParentheses(n, curr, ans);
    curr.pop_back();
}

int main(){
    int n = 3;
    string curr = "";
    vector<string>ans;
    generateParentheses(n, curr, ans);

    for(int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}