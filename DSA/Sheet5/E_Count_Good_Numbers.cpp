#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, count = 0;
    cin >> N;

    long long x;
    for (int i = 0; i < N; i++) {
        cin >> x;

        if ((x != 0 && 18 % x == 0) || x % 45 == 0) {
            count++;
        }
    }

    cout << count;
    return 0;
}
