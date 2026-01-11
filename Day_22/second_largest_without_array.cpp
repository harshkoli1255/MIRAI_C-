#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n1 = 34517;
    int n2 = n1;

    int firstLar = INT_MIN;
    int secLar = INT_MIN;

    while(n1 > 0) {
        int lastdigit = n1 % 10;
        if(lastdigit > firstLar) {
            secLar = firstLar;
            firstLar = lastdigit;
        }

        if((lastdigit > secLar) && ( lastdigit != firstLar)){
            secLar = lastdigit;
        }
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    cout<<firstLar<<endl;
    cout<<secLar<<endl;
    return 0;
}