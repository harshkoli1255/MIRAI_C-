#include<iostream>
using namespace std;

void readstring(char* str, int len, char del) {
    char ch;
    ch = cin.get();
    int i = 0;
    
    while(ch != del && i < len) {
        str[i++] = ch;
        ch = cin.get();
    }
    str[i] = '\0';
}

void copystr(char* str1, char* str2, int len1, int len2) {
    int i = 0;
    while(i < len2) {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main(){

    char del = '\n';
    char str1[100]; 
    char str2[100];

    readstring(str1, 100, del); // h a r s h
    readstring(str2, 100, del); // k o l i

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    copystr(str1, str2, len1, len2);

    cout<<str1<<endl;
    return 0;
}

// s1 = "hello"
// s2 = ""


// strdup --->