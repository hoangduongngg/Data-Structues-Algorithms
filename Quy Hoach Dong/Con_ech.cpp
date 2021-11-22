#include <bits/stdc++.h>
using namespace std;

main() {
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        long long f[n+5] = {0};
        f[0]=1; f[1]=1;
        for (int i=2; i<=n; i++) {
            for (int j=1; j <= min(i,3); j++ ) { //do neu i<3, vi du i=2 thi chi lay f[2] = f[1] + f[0]
                f[i] += f[i-j];
            }
        }
    cout << f[n] << endl;
    }
}