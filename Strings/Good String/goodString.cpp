#include<iostream>
using namespace std;
int main(){
    string vowels = "aeiou";
    string s;
    getline(cin, s);

    sort(vowels.begin(), vowels.end());
    sort(s.begin(), s.end());


    if(vowels == s) {
        cout<<"Its a good string"<<endl;
    }
    else {
        cout<<"Not a good String"<<endl;
    }
    return 0;
}