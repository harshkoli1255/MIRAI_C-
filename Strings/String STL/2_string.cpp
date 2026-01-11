#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "hello";
    // cout<<s1<<endl;
    
    string s2(s1); // content of s1 copied in s2
    // cout<<s2<<endl;


    string s4;
    cin>>s4;
    cin.ignore();
    cout<<s4<<endl;

    // userinput
    string s3;
    getline(cin, s3);

    
    // cout<<s3.at(1)<<endl; // s3[1] - index
    
    string s5 = "world";

    // using append funtion
    s3.append(s5);

    s3 = s3+s5; // using aritmatic

    cout<<s3<<endl;

    cout<<s3.find("world");  // find = gives the starting index

    // if its not able to find the

    // string::npos; // no position -> not a valid position

    s4.find("world") == string::npos; 

    // rfind funtion give the last occurence of the char

    // and to find the sub string we use s.substr(need_index_to_start_from, no_of_characters);

    // example -> Hello

    

    return 0;
}