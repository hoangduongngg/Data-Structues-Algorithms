#include <bits/stdc++.h>
using namespace std;

bool Check (string s) {
    stack <char> p;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            p.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (p.empty()) return 0;
            else {
                if ((s[i] == ')' && p.top() == '(') || (s[i] == ']' && p.top() == '[') || (s[i] == '}' && p.top() == '{') ) {
                    p.pop();
                }
                else return 0;
            }
        }
    }
    if (p.empty()) return 1;
    return 0;
}
void print_res (string s) {
    if (Check(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        print_res(s);
    }
}