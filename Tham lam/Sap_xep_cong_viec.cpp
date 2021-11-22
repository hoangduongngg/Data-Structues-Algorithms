#include <bits/stdc++.h>
#define pp pair<int, int>
using namespace std;

bool cmp (pair <int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first <b.first;
    return a.second < b.second ;
}

int xuly (pair<int, int> a[], int n) {
    sort (a, a+n, cmp);
    int res = 1, j = 0;
    for (int i=1; i<n; i++) {
        if (a[i].first >= a[j].second) {
            res++;
            j = i;
        }
    }
    return res;
}

main() {
    int t, n;
    pair<int, int> a[100005];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> a[i].first;
        }
        for (int i=0; i<n; i++) {
            cin >> a[i].second;
        }
        cout << xuly(a,n) << endl;
    }
}

/*
1
6
1  3  0  5  8  5
2  4  6  7  9  9
*/