#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long count = 0;

    for (long long i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            count += a[i - 1] - a[i];
            a[i] = a[i - 1]; // update the element
        }
    }
    
    cout << count << endl;
    
    return 0;
}

// https://cses.fi/problemset/task/1094