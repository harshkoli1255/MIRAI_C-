#include<iostream>
using namespace std;

int main(){
    int n = 10;

    string str;

    while(n > 0) {
        if(n%2) {
            str+='1';
        }
        else {
            str+='0';
        }
        n = n/2;
    }

    string reverse_str = str;

    reverse(reverse_str.begin(), reverse_str.end());
    int count = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] != reverse_str[i]) {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

