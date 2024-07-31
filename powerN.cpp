#include <bits/stdc++.h>
using namespace std;

const int MOD =1000000007;

long long power(int n, int r) {
    if (r == 0)
        return 1;

    long long result = 1;
    while (r> 0) {
        if (r % 2 == 1) {
            result = (result * n) % MOD;
        }
        n= (n*n ) % MOD;
        r/= 2;
    }
    return result;
}

int main() {
    int n, r;
    cout << "Enter the number and its reverse: ";
    cin >> n >> r;

    long long result = power(n, r);
    cout << "Result: " << result <<endl;

    return 0;
}
