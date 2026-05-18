#include<iostream>
using namespace std;


string decodeString(string letters, int k, int n) {
    int size = 0;
    for(auto &ch : letters) {
        if(ch - '0' <= 9) {
            size = (size)*(ch-'0');
        }
        else {
            size++;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        k = k % size;

        if(isalpha(letters[i]) && k == 0) {
            return string(1, letters[i]);
        }

        if(isalpha(letters[i])) {
            size--;

        }
        else {
            size = (size)/(letters[i] - '0');
        }
    }
    return "";
}
int main(){
    string letters = "leet2code3";
    int k = 10;
    int n = letters.length();
    cout<<decodeString(letters, k, n)<<endl;    
    
    return 0;
}