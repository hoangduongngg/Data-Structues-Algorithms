#include <bits/stdc++.h>
using namespace std;

void nhiphan(int n) {
    queue <string> q;
    q.push("1");
    while (n--) {
        string x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x + "0");
        q.push(x + "1");
    }
    cout << endl;
}

main() {
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        nhiphan(n);
    }
}