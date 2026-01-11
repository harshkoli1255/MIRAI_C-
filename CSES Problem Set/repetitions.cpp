#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;

    int count = 1;
    int max_count = 1;

    for (int i = 0; i < s.length(); i++){
        if(s[i]==s[i+1]) {
            count++;
            if(count > max_count) {
                max_count = count;
            }
        }
        else{
            count = 1;
            if(count>max_count){
                max_count = count;
            }
        }
    }
    cout<<max_count<<endl;
    
    
    return 0;
}

// https://cses.fi/problemset/task/1069