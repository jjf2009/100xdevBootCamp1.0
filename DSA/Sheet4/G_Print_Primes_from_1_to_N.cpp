#include <bits/stdc++.h>
using namespace std;

void printPrimes(int n) {
    bool first = true;
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            if (!first) cout << " ";
            cout << num;
            first = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    printPrimes(n);
}