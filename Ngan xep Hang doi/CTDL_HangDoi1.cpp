#include <bits/stdc++.h>
using namespace std;

void run1 (queue <string> q) {
    cout << q.size() << endl;
}
void run2 (queue <string> q) {
    if (q.empty()) cout << "YES" <<endl;
    else cout << "NO" << endl;
}
void run3 (queue <string> &q, string s) {
    char temp[20];
    s.copy(temp, s.length() - 2, 2);
    temp[s.length() - 2] = '\0';
    q.push(temp);
}
void run4 (queue <string> &q) {
    if (!q.empty()) q.pop();
}
void run5(queue <string> q) {
    if (q.empty()) cout << -1 <<endl;
    else cout << q.front() << endl;
}
void run6(queue <string> q) {
    if (q.empty()) cout << -1 <<endl;
    else cout << q.back() << endl;
}

main() {
    int t, n; cin >> t;
    while (t--) {
        cin >> n; cin.ignore();
        queue <string> q; 
        while (n--) {
            string s;
            getline(cin, s);
            
            //phan than:
            if (s == "1") run1(q);
            else if (s == "2") run2(q);
            else if (s.length() > 1) run3(q, s);
            else if (s == "4") run4(q);
            else if (s == "5") run5(q);
            else run6(q);
        }
    }
}