#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--) {
        long a,b;
        cin>>a>>b;
        long long rev_a = 0;
        long long rev_b = 0;
        while(a > 0){
            rev_a=(rev_a*10)+(a%10);
            a/=10;
        }
        while(b > 0){
            rev_b=(rev_b*10)+(b%10);
            b/=10;
        }
        long long sum=rev_a+rev_b;
        long long rev_sum=0;
        while(sum > 0){
            rev_sum = (rev_sum*10)+(sum%10);
            sum/=10;
        }
        cout<<rev_sum<<endl;
    }
    return 0;
}