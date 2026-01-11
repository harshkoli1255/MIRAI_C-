#include<iostream>
using namespace std;
int main(){
    int from,to;
    cout<<"from:- ";
    cin>>from;
    cout<<"to:- ";
    cin>>to;
    
    while(from <= to) {
        bool isPrime = true;
        for (int i = 2; i*i <= from; i++){
            if(from%i == 0) {
                isPrime = false;
            }
        }
        if(isPrime == true){
            cout<<from<<endl;
        }
        from++;
    }
    return 0;
}