#include <bits/stdc++.h>
using namespace std;
int demtu(string s) {
    int res;
    for (int i=0; i<s.length(); i++)
        if (s[i] == ' ')  res ++;
    return res+1;
}

main() {
    int t, x=0; cin >> t;
    queue <int> q;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        if (demtu(s) == 6 && (q.empty() or !q.front()))
            q.push(1);
        else if (demtu(s) == 7) {
            if (x==0) q.push(2);
            x = (x+1)%4;
        }
    }

    cout << q.size()<< endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}
/*
8
1 2 3 4 5 6
1 2 3 4 5 6 7 8
1 2 3 4 5 6
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
*/