#include<iostream>
#include <unordered_map>
using namespace std;

bool checkAllZero(unordered_map<char, int>&mp) {
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second != 0) {
            return false;
        } 
    }
    return true;
}
int main(){
    string txt = "forxxorfxdofr";
    string pat = "for";
    int n = txt.length();
    unordered_map<char, int>mp;
    
    for(auto &i : pat) {
        if(mp.find(i) != mp.end()) {
            mp[i]++;
        }
        else {
            mp[i] = 1;
        }
    }
    int i = 0;
    int j = 0;
    int count = 0;
    int winSize = pat.length();
    while(j < n) {
        if(mp.find(txt[j]) != mp.end()) {
            mp[txt[j]]--;
        }   
        if(j-i+1 == winSize) {
            bool ans = checkAllZero(mp);
            if(ans) {
                count++;
            }
            if(mp.find(txt[i]) != mp.end()) {
                mp[txt[i]]++;
            }
            i++;
        }
        j++;
    }
    
    cout<<count<<endl;

    return 0;
}