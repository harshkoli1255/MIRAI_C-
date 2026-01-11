#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;

    int largest = INT_MIN;

    while(n != 0) {
        int lastDigit = n%10;

        if(lastDigit > largest) {
            largest = lastDigit;
        }

        n = n /10;
    }

    cout<<largest<<endl;
    return 0;
}