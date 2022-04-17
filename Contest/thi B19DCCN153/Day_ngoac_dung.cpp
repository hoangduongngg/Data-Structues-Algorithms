#include <bits/stdc++.h>
using namespace std;

int run(string s) {
    stack <char> p;
    int l = 0;
    int res = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '[' || s[i]=='(') {
            if (p.empty()) {
                p.push(s[i]);
            }
            else {
                if ((p.top() == ')') || (p.top() == ']')) {
                    res = max (res, l);
                    l = 0;
                }
                else {
                    p.push(s[i]);
                }
            }
        }
        
        else {
            if (s[i]==']' && p.top()=='[') {
                l+=1;
                p.pop();
            }
            else if (s[i]==')' && p.top()=='(') {
                p.pop();
            }
            
            // else if ( (s[i]==']' && p.top()=='(') || (s[i]==')' && p.top()=='[')) {
                
            // }
            else {
                res = max (res, l);
                l = 0;
            }
        }
    }
    res = max(res, l);
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