#include <bits/stdc++.h>
using namespace std;

void danh_stt(string s) {
    stack <int> p;
    int count = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(') {
            count ++;
            p.push(count);
            cout << p.top() << " ";
        }
        else if (s[i] == ')') {
            cout << p.top() << " ";
            p.pop();
        }
    }
    cout << endl;
}
main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        danh_stt(s);
    }
}

/*
Input:
2
(a + (b *c) ) + (d/e)
( ( () ) ( () ) )

Output:
1  2  2  1  3  3
1 2  3  3  2  4  5  5  4  1
*/