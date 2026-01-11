#include<iostream>
using namespace std;



int longestSubString(vector<int> f1, vector<int> f2) {

    for(int i = 0; i < f1.size(); i++) {
        if(f1[i] != f2[i]) {
            f2[i]--;
        }
    }
}   

int longestGoodSubString(string vowels, string s) {
    
    vector<int>vowels_freq(26, 0);

    for(char &ch : vowels) {
        vowels_freq[ch-'a']++;
    }

    int windSize = vowels.length();

    int largest = 0;

    for(int i = 0; i < s.length(); i++) {
        vector<int>windFreq(26, 0);
        
        int windIdx = 0, idx = i;

        while(windIdx < windSize && idx < s.length()) {
            windFreq[s[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        
        int curSubLength = longestSubString(vowels_freq, windFreq);

        largest = max(largest, curSubLength);

    }

    return largest;
}

int main(){
    
    return 0;
}