#include <bits/stdc++.h>
using namespace std;

void SoLocPhat (int n) {
    queue <string> q;
    queue <string> q2;
    q.push("6"); q.push("8");
    while (1) {
        string x = q.front();
        q.pop();
        q2.push(x);
        
        if (x.length() > n)
            break;
        q.push(x + "6");
        q.push(x + "8");
    }
    cout << q2.size()-1 << endl;
    while (q2.size() > 1) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
}

main() {
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        SoLocPhat(n);
    }
}