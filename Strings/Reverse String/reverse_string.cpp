#include<iostream>
using namespace std;
int main(){
    string s = "harsh";

    int i = 0;
    int j = s.length() -1;

    while(i < j) {
        s[i] = s[i]^s[j];
        s[j] = s[i]^s[j];
        s[i] = s[i]^s[j];
        i++;
        j--;
    }
    cout<<s<<endl;
    return 0;
}