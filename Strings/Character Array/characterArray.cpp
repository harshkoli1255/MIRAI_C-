#include<iostream>
using namespace std;
int main(){
    char ch[] = "harshkoli";
    char ch[] = {'h', 'a', 'r', 's', 'h', ' ', 'k', 'o', 'l', 'i', '\0'};
    int n = sizeof(ch);


    cout<<ch<<endl; // Both Print harsh koli


    return 0;
}