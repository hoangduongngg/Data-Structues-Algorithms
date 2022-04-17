#include <bits/stdc++.h>
using namespace std;

int run(string s) {
    stack <char> p;
    int l = 0;
    int res = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(' || s[i] == '[') {
            p.push(s[i]);
        }
        else {
            if (p.empty()) {
                res = max (res, l);
                l = 0;
            }
            else if (s[i] == ']') {
                if (p.top() == '[') {
                    l+=1;
                    res = max (res, l);
                    p.pop();
                }
                else {
                    res = max (res, l);
                    l = 0;
                }
            }
            else {
                if (p.top() == '(') {
                    p.pop();
                }
                else {
                    res = max (res, l);
                    l = 0;
                }
            }
        }
    }
    return res;
}
main() {
        string s;
        cin >> s;
        cout << run(s);
    }

// 5
// [()]
// [(])
// [[])(]
// [[]()]
// [[]])([[[]]]