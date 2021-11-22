#include <bits/stdc++.h>
using namespace std;

long long So09(int n) {
    queue <long long> q;
    q.push(9);
    while (1) {
        long long x = q.front();
        q.pop();
        if (x%n==0) return x;
        q.push(x*10);
        q.push(x*10+9);
    }
}
main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout<< So09(n) << endl;
    }
}