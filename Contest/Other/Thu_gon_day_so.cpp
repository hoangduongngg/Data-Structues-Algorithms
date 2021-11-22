#include <bits/stdc++.h>
using namespace std;

int xuly (int a[], int n) {
    stack <int> p;
    for (int i=0; i<n; i++) {
        if (p.empty() or (a[i] + p.top())%2)
            p.push(a[i]);
        else p.pop();
    }
    return p.size();
}
main() {
    int n; cin >> n;
    int a[n+5];
    for (int i=0; i<n; i++)
        cin >> a[i];
    cout << xuly(a,n);
}