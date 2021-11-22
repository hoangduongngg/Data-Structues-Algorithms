#include <bits/stdc++.h>
using namespace std;

main() {
    string str = "102:330:3133:76531:451:000:12:44412";
    replace(str.begin(), str.end(), ':', ' ');  // replace ':' by ' '
    cout << str << endl;

    queue <string> q;
    stringstream ss(str);
    cout << ss << endl;
    string temp;
    cout<< temp<< endl;
    while (ss >> temp) {
        q.push(temp); // done! now a={102,330,3133,76531,451,000,12,44412}
        cout<<temp<< " ";
    }
}
