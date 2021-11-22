#include <bits/stdc++.h>
using namespace std;

long long run (int n, long long k) {
    long long mid = pow(2, n-1);
    if (k == mid) return n;
    else if (k < mid) return run (n-1, k);
    return run (n-1, k - mid);
}
main() {
    int t; cin >>t;
    while (t--) {
        int n;
        long long k;
        cin >>n>>k;
        cout << run(n,k) << endl;
    }
}