#include<iostream> 

using namespace std; 

int length(char* str){ 
    int i;

    for(i = 0 ; str[i] != '\0'; i++){} 

    return i;

} 

int main() { 

    char str[100]; 

    cin.getline(str, 100); 
    
    cout<<length(str)<<endl; 

    return 0; 

} 