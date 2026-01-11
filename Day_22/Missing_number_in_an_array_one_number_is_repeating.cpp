#include<iostream>
using namespace std;
int main(){
    const int n = 5;
    int a[n] = {5, 3, 2, 4, 1};
    int size = sizeof(a)/sizeof(a[0]);

    int sumi = 0;
    int sum = n*(n+1)/2;
    for (int i = 0; i < size; i++) {
        sumi += a[i];
    }
    cout<<sumi<<endl;
    
    return 0;
}
// 8682
// 8644