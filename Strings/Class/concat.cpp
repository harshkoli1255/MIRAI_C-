#include<iostream>
using namespace std;

void readString(char* s1, int size, char del) {
    char ch = cin.get();
    int i = 0;
    while(i < size - 1 && ch != del) {
        s1[i++] = ch;
        ch = cin.get();
    }
    s1[i] = '\0';
}

void append(char* s1, char* s2) {
    int len1 = 0;

    while(s1[len1] != '\0') len1++;

    int len2 = 0;
    
    while(s2[len2] != '\0') len2++;

    for(int i = 0; i < len2; i++) s1[len1 + i] = s2[i];
    
    s1[len1 + len2] = '\0';
}

int main(){
    // char del;
    // cin >> del;
    // cin.ignore();

    char s1[500];
    char s2[500];

    readString(s1, 500, '\n');
    readString(s2, 500, '\n');

    append(s1, s2);
    cout << s1;
    cout<<endl;

    return 0;
}

