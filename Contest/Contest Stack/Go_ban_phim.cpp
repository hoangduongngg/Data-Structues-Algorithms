#include <bits/stdc++.h>
using namespace std;

void print_stack (stack <char> p) {
    int a[1000000] ;
    cout << p.size();
    int i=0;
    while(!p.empty()) {
        a[i]= p.top();
        p.pop();
        i++;
    }

    for (int j=i; j>=0; j--)
        cout<<a[j];
    cout<<endl;
}

void xuly(string s) {
    stack <char> p;
    for (int i=0; i<s.length(); i++) {
        if (!p.empty()) {
            if (s[i] == '-') p.pop();
            else if (s[i] == '<') {
                char x = p.top();
                p.pop(); p.push(s[i]);
                p.push(x);
            }
            else if (s[i] == '>') {
                continue;
            }
            else p.push(s[i]);
        }
        else if (s[i] != '-' && s[i]!='<' && s[i]!='>')
            p.push(s[i]);
    }
    cout << p.size();
    print_stack(p);
    
}
main() {
    string s;
    getline(cin, s);
    xuly(s);
}