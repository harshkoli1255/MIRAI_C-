#include<iostream>
#include<cstring>
using namespace std;

void readstring(char* arr, int size, char del) {
    char ch;
    ch = cin.get();

    int i = 0;
    while(i < size -1 && ch != del) {
        arr[i] = ch;
        ch = cin.get();
        i++;
    }
    arr[i] = '\0';
    cin.ignore();
    cout<<arr<<endl;
}

bool checkPal(char* arr, int size) {
    int i = 0;
    int j = size -1;
    while(i < j) {
        if(arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
} 

int main(){
    char arr[100];
    char del;
    del = cin.get();

    readstring(arr, 100, del);
    cout<<checkPal(arr, strlen(arr))<<endl;
    return 0;
}