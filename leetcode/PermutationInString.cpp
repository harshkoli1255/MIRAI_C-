#include<iostream>
using namespace std;

bool isFreqSame(vector<int>f1, vector<int>f2) {
    for(int i = 0; i < f1.size(); i++) {
        if(f1[i]!=f2[i]) {
            return false;
        }
    }
    return true;
}

bool checkPermutation(string s1, string s2) {
    vector<int>freq_s1(26,0);
    
    for(char &ch : s1) {
        freq_s1[ch-'a']++;
    }

    int windSize = s1.length();
    
    for(int i = 0; i < s2.length(); i++) {
        int winIdx = 0, idx = i;
        vector<int>windFreq(26,0);

        while(winIdx < windSize && idx < s2.length()) {
            windFreq[s2[idx]-'a']++;
            winIdx++;
            idx++;
        }
        if(isFreqSame(freq_s1,windFreq)) {
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout<<boolalpha<<checkPermutation(s1,s2)<<endl;

    return 0;
}