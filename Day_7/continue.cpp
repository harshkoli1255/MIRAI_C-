#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i <= 20) {
        if(i%3 == 0 || i%5 ==0) {
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}