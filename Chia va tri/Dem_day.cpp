#include <bits/stdc++.h>
using namespace std;
int mod = 123456789;
// result = 2^(n - 1)
long long lt(long long n, long long k) {
    if (k==0) return 1;
    long long x = lt(n, k/2);
    if (k%2 ==0) return x*x%mod;
    return n*(x*x%mod)%mod;
}

main() {
    int t; cin >>t;
    while (t--) {
        long long n; cin >> n;
        cout << lt(2, n-1) << endl;
    }
}