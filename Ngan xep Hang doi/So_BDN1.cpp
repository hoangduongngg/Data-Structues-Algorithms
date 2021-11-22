#include <bits/stdc++.h>
using namespace std;

int bdn1 (long long n) {
    int dem = 0;
    queue <long long> q;
    q.push(1);
    while (true) {
        long long x = q.front();
        q.pop();
        if (x>n) break;
        dem++;
        q.push(x*10);
        q.push(x*10 + 1);
    }

    return dem;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n; cin >> n;
        cout << bdn1(n) << endl;
    }
}