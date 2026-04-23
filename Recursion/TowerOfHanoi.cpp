#include<iostream>
using namespace std;

void toh(int n, string from, string to, string help) {
    if(n == 0) return;
    toh(n-1, from, help, to);
    cout<<"Move disk "<<n<<" "<<from<<" to "<<to<<endl;
    toh(n-1, help, to, from);
}

int main(){
    int n = 3;
    toh(n, "A", "B", "C");
    // cout<<pow(2, n) - 1<<endl;
    cout<<(1<<n)-1<<endl;
    return 0;
}