#include <bits/stdc++.h>
using namespace std;

void SoLocPhat (int n) {
    queue <string> q;
    stack <string> p;
    q.push("6"); q.push("8");
    while (1) {
        string x = q.front();
        p.push(x);
        q.pop();
        
        if (x.length() > n) {
            p.pop();
            break;
        }
        q.push(x + "6");
        q.push(x + "8");
    }

    cout << p.size() << endl;
    while (!p.empty()) {
        cout << p.top() << " ";
        p.pop();
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