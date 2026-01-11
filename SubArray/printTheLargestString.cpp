#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char largest[100];
    char str[100];
    
    cin.ignore();
 
    cin.getline(largest,100); 

    for(int i = 0; i < n-1; i++) {

        cin.getline(str,100); 

        int len_s1 = strlen(str);
        int len_s2 = strlen(largest);

        if(len_s1 == len_s2) {
            for(int j = 0; j < len_s1; j++) {
                if(str[j] == largest[j]) {
                    continue;
                }
                else if(str[j] > largest[j]) {
                    strcpy(largest, str);
                    break;
                }
            }
        }
        else if(len_s1 > len_s2) {
            strcpy(largest, str);
        }
    }

    cout<<largest<<endl;

    return 0;
}