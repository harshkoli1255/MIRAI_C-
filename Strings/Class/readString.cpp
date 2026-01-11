#include<iostream> 
using namespace std; 

// void readstring(char* arr, int size, char del){ 
//     char ch; 
//     ch = cin.get(); 
//     int i = 0; 
//     while(ch != del and i < size - 1){ 
//         arr[i]= ch; 
//         ch = cin.get();
//         i++; 
//     } 
//     arr[i]= '\0';
//     cout<<arr<<endl; 
// } 

void readString(char* s1, int len, char del) {
    char ch = cin.get();
    int i = 0;
    while(i < len - 1 && ch != del) {
        s1[i++] = ch;
        ch = cin.get();
    }
    s1[i] = '\0';
}

int main() { 

    char arr[10]; 
    char del; 
    del = cin.get(); 

    readString(arr, 10, del); 
    
    return 0; 
}