#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int compareStr(string &s1, string &s2) {
    int n = s1.length();
    int m = s2.length();

    if(n > m) {
        return 1;
    }

    else if(n < m) {
        return -1;
    }
    
    else if(n == m) {
        int i = 0;
        int j = 0;

        while(s1[i] != '\0' && s2[j] != '\0') {
            if(s1[i] == s2[j]) {
                i++;
                j++;
            }
            if(s1[i] > s2[j]) {
                return 1;
            }
            if(s1[i] < s2[j]) {
                return -1;
            }
        }
    }
    return 0;
    
}
int main(){
    string s1 = "abcd";
    string s2 = "abce";
    cout<<compareStr(s1,s2)<<endl;
    return 0;
}