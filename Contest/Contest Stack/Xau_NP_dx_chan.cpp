#include <bits/stdc++.h>
using namespace std;

string DoiXung (string x) {
    string res = x;
    stack <string> p;
    for (int i=x.length()-1; i>=0; i--) 
        res+=x[i];
    return res;
}

void SoNguyenThuy (int n) {
    queue <string> q;
    q.push("0"); q.push("1");

    while (1) {
        string x = q.front(); q.pop();
        if (x.length() > n/2) break;
        cout << DoiXung(x) << " ";
        q.push(x + "0");
        q.push(x + "1");
    }
    cout << endl;
}

main() {
    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        SoNguyenThuy(n);
    }

}