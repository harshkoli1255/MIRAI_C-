#include<iostream>
using namespace std;
int main(){
    string s = "abcde"; 
    // using function -> substr

    for(int i = 0; i < s.length(); i++) {
        for(int j = i; j < s.length(); j++) {
            cout<<s.substr(i,j-i+1)<<" ";
        }
        cout<<endl;
    }    
    

    // using just for loop

    // for(int i = 0; i < s.length(); i++) {
    //     for(int j = i; j < s.length(); j++) {
    //         for(int k = i; k <= j; k++) {
    //             cout<<s[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }    
    
    return 0;
}