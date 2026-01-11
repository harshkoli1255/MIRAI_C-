#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "@he#e#le!eh";
    int len = s.length();

    int i = 0;
    int j = len-1;
    bool ispalindrome = false;
    
    while(i < j) {
        if(!(isalnum(s[i]))) {
            i++;
            continue;
        }
        if(!(isalnum(s[j]))) {
            j--;
            continue;
        }
        if(s[i] == s[j]) {
            i++;
            j--;
            ispalindrome = true;
        }
        else {
            break;
        }
    }

    cout<<boolalpha<<ispalindrome<<endl;

    return 0;
}