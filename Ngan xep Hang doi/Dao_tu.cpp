#include <bits/stdc++.h>
using namespace std;

void daotu (string str) {
    stack <char> p;
    for (int i=0; i<str.length(); i++)
        p.push(str[i]);
    while (!p.empty()) {
        cout << p.top();
        p.pop();
    }
}
void xuly(string s) {
    stringstream ss (s);
    string temp;
    while (ss >> temp) {
        daotu(temp);
        cout << " ";
    }
    cout << endl;
}
main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        xuly(s);
    }
}