#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool chuaxet[MAX];
vector <int> List[MAX];

void DFS(int u) {
    chuaxet[u] = false;
    for (int i=0; i<List[u].size(); i++) {
        int v = List[u][i];
        if (chuaxet[v]) DFS(v);
    }
}

main() {
    int t, n,m,u,x,y,i;
    cin >> t;
    while (t--) {
        memset (chuaxet, true, sizeof(chuaxet));
        for (int i=0; i<MAX; i++) List[i].clear();
        cin >>n;
        for (int i=1; i<n; i++) {
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(1);
        bool check = true;
        for (int i=2; i<=n; i++) {
            if (chuaxet[i]) {
                check = false;
            }
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}
/*
2
4
1 2
1 3
2 4
4
1 2
1 3
2 3
*/