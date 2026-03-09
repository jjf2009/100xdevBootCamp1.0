#include <bits/stdc++.h>
using namespace std;

void printfactors(int n) {
    if (n < 2) {
        cout << "Not Prime";
        return;
    }
    for (int i = 2; i * i <= n; i++) {  // check up to √n
        if (n % i == 0) {
            cout << "Not Prime";
            return;
        }
    }
    cout << "Prime";
}

int main() {
    int n;
    cin >> n;
    printfactors(n);
}