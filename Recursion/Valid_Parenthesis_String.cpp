#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool checkValidString(string s, int i, int n, int count) { 
    if(count < 0) {
        return false;
    }
    if(i == n) {
        return count==0;
    }
    if(s[i] == '(') {
        return checkValidString(s, i+1, n, count+1);
    }
    else if(s[i] == ')') {
        return checkValidString(s, i+1, n, count-1);
    }
    else if(checkValidString(s, i+1, n, count +1) || checkValidString(s, i+1, n, count -1) || checkValidString(s, i+1, n, count)) {
        return true;
    }
    return false;
}
int main(){
    string s = "(*))*)";
    int n = s.length();
    cout<<boolalpha<<checkValidString(s, 0, n, 0)<<endl;
    return 0;
}