// url = https://www.spoj.com/problems/LASTDIG/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int solve(ull a, ull b) {         // solving problem using exponentiation
    if (a == 0 || b == 0) return 1;
    if (a % 10 == 0) return 0;

    ull ans = 1;
    while (b > 0) {
        if (b % 2 == 0) {
            a = (a * a) % 10;
            b /= 2;
        } else {
            ans = (ans * a) % 10;
            b--;
        }
    }
    return ans % 10;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull x, y;
        cin >> x >> y;
        if (x % 10 == 0) {
            cout << 0 << endl;
        } else {
            cout << solve(x, y) << endl;
        }
    }

    return 0;
}
