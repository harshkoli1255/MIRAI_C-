#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<int>arr;
    long long arr_sum = 0;
    for (long long i = 0; i < n-1; i++){
        long long a;
        cin>>a;
        arr.push_back(a);
        arr_sum+= a;
    }

    // 2, 3, 1, 5

    long long sum = (n*(n+1))/2;

    long long missing_no = sum - arr_sum;
    cout<<missing_no<<endl;
    return 0;
}

// https://cses.fi/problemset/task/1083