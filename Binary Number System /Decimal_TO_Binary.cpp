#include<iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;
    
    while(decNum > 0) {
        int rem = decNum % 2;
        ans += (rem*pow);
        pow *=10;
        decNum /=2;
    }
    return ans;
}
int main(){
    cout<<decToBinary(7)<<endl;
    cout<<decToBinary(70)<<endl;
    cout<<decToBinary(10)<<endl;
    return 0;
}