#include <bits/stdc++.h>
using namespace std;

int SoCapDauNgoacDungMax(string s) {
    stack <int> p; p.push(0);
    int count;
    int Max = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(') {
            count = p.top() + 1;
            Max = max(count, Max);
            p.push(count);
        }
        if (s[i] == ')') {
            if (p.top() !=0 )p.pop();
            else return -1;
        }
    }
    if (p.top() == 0) return Max;
    return -1;
}

main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout<< SoCapDauNgoacDungMax(s) << endl;
    }
}