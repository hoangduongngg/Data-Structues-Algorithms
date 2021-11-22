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
    int count = 0;
    queue <string> q;
    q.push("4"); q.push("5");

    while (count<n) {
        string x = q.front(); q.pop();
        cout << DoiXung(x) << " ";
        q.push(x + "4");
        q.push(x + "5");
        count++;
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