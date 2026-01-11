#include<iostream>
using namespace std;
int main(){
    string s = "axxxxyyyyb";
    string part = "xy";

    while(s.find(part) <= s.length()) {
        int start = s.find(part);
        s.erase(start, part.length());
    }
    cout<<s<<endl;

    return 0;
}