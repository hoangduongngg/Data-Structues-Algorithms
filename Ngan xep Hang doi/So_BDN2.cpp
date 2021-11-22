#include <bits/stdc++.h>
using namespace std;

long long bdn2(int n) {
    queue <long long> q;
    q.push(1);
    while (true) {
        long long x = q.front();
        q.pop();
        if (x%n==0) return x;
        q.push(x*10);
        q.push(x*10 + 1);
    }
}

main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << bdn2(n) <<endl;
    }
}