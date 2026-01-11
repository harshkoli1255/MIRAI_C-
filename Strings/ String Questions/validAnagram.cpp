#include<iostream>
using namespace std;

bool validAnagram(string s1, string s2) {

    vector<int>freq(26,0);

    for(char &ch : s1) {
        freq[ch-'a']++;
    }

    for(char &ch : s2) {
        freq[ch -'a']--;
    }

    for(int i = 0; i < freq.size(); i++) {
        if(freq[i]!=0) {
            return false;
        }
    }   

    return true;

}
int main(){
    string s1 = "harsh";
    string s2 = "ahhsr";
    cout<<boolalpha<<validAnagram(s1, s2)<<endl;
    return 0;
}