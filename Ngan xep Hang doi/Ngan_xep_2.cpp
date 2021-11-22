#include <bits/stdc++.h>
using namespace std;

main() {
    int t; cin >> t;
    stack <string> p;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (s == "POP")
            if (p.empty()!=1) p.pop();
            else continue;
        else if (s == "PRINT") {
            if (p.empty()) cout << "NONE" << endl;
            else cout << p.top() << endl;
        }
        else {  //push
            char temp[10];
            s.copy(temp, s.length() - 5, 5);
            temp[s.length() - 5] = '\0';
            p.push(temp);
        }
    }
}