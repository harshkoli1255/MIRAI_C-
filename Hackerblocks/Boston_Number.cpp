#include <iostream>
using namespace std;

// Function 1: Sum of digits
int sumOfDigits(long long n) {    
    int sum = 0;
    while(n > 0) {
        int ld = n % 10;
        sum += ld;
        n = n / 10;
    }
    return sum;
}

// Function 2: Check if a number is prime
bool isPrime(long long n) {
    if(n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

// Function 3: Sum of digits of prime factors
int sumofPrimeFactors(long long n) {
    int sum = 0;
    for(long long i = 2; i <= n; i++) {
        if(isPrime(i)) {
            while(n % i == 0) {
                sum += sumOfDigits(i);
                n = n / i;
            }
        }
    }
    return sum;
}

int main() {
    long long N;
    cin >> N;

    // Boston number must be composite
    if(isPrime(N)) {
        cout << 0 << endl;
        return 0;
    }

    int sumDigitsNum = sumOfDigits(N);
    int sumDigitsFactors = sumofPrimeFactors(N);

    if(sumDigitsNum == sumDigitsFactors)
        cout << 1 << endl;  // Boston number
    else
        cout << 0 << endl;  // Not a Boston number

    return 0;
}
