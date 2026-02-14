#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        // left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // middle spaces
        for (int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }

        // right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
