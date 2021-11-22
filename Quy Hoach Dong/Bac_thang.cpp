#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
main() {
    int t,n,k; cin >> t;
    while (t--) {
        cin >>n>>k;
        int f[n+5] = {0};
        f[0]= 1; f[1] = 1;
        for (int i=2; i<=n; i++) {
            for (int j=1; j<=min(i,k); j++) {
                f[i] = (f[i] + f[i-j])%mod;
            }
        }
        cout << f[n] << endl;
    }
}