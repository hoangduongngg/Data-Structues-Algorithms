#include <bits/stdc++.h>
using namespace std;

void show_stack  (stack <string> p) {
    int l = p.size();
    string a[l];
    for (int i=0; i<l; i++) {
        a[i] = p.top();
        p.pop();
    }
    for (int i=l-1; i>=0; i--)
        cout << a[i] << " ";
cout << endl;
}

main() {
    string s;
    stack <string> p;
    while(true) {
        getline(cin, s);
        if (s=="pop") {
            if (p.size() == 0) {
                cout << "empty" <<endl;
                break;
            }
            else p.pop();
        }
        else if (s == "show") {
            if (p.size() == 0) {
                cout << "empty" <<endl;
                break;
            }
            else show_stack(p);
        }
        else {  //push something
            char temp[10];   
            s.copy(temp, s.length() - 5, 5);
            temp[s.length() - 5] = '\0';
            p.push(temp);
        }
    }
}