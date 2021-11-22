#include <bits/stdc++.h>
using namespace std;

long long NoiDay(int a[], int n) {
    long long res = 0;
    //Khoi tao, mac dinh sort theo max, them greater de sort theo min
    priority_queue <int, vector<int>, greater<int> > pq(a,a+n);
    while (pq.size() >1) {
        int min1 = pq.top(); pq.pop();
        int min2 = pq.top(); pq.pop();
        int tmp = min1 + min2; //day moi = tong 2 day nho nhat
        res += tmp;
        pq.push(tmp);
    }
    return res;
}

main() {
    int t, n; cin >> t;
    while (t--) {
        cin >>n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];

        cout << NoiDay(a,n) << endl;
    }
}

/*
2
4
4 3 2 6
5
4 2 7 6 9
*/