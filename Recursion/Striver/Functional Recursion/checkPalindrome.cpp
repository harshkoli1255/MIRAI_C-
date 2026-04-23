#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s, int i, int n) {
    if(i >= n/2) {
        return true;
    }
    if(s[i]!= s[n-i-1]) {
        return false;
    }

return checkPalindrome(s, i+1, n);
}   
int main(){

    string s = "racecar";
    int n = s.length();
    cout<<checkPalindrome(s,0,n)<<endl;
    
    return 0;
}