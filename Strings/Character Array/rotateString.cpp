#include<iostream>
using namespace std;

void rotateStr(char* str, int len) {

    char lastChar = str[len-1];

    for(int i = len-1; i > 0; i--) {
        str[i] = str[i-1];
    }
    str[0] = lastChar;
}

int main(){

    char str[] = "harshkoli";
    int len = strlen(str);
    int k;
    k = 10;
    k = k % len;

    rotateStr(str, len);
    
    cout<<str<<endl;

    return 0;
}
