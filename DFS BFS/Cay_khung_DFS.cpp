#include <bits/stdc++.h>
#define MAX 1005
using namespace std;
bool chuaxet[MAX];
vector <int> List[MAX];
vector <pair <int, int> > CK;
void DFS(int u) {
    chuaxet[u] = false;
    for (int i=0; i<List[u].size(); i++) {
        int v = List[u][i];
        if (chuaxet[v]) {
            CK.push_back({u,v});
            DFS(v);
        }
    }
}
main() {
    int t, n,m,u,x,y,i;
    cin >> t;
    while (t--) {
        memset (chuaxet, true, sizeof(chuaxet));
        for (int i=0; i<MAX; i++) List[i].clear();
        CK.clear();
        cin >>n>>m>>u;
        for (int i=1; i<=m; i++) {
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(u);
        if (CK.size() < n-1) cout << "-1" << endl;
        else {
            for (int i=0; i<CK.size(); i++) {
                cout << CK[i].first << " " << CK[i].second << endl;
            }
        }
    }
    
}
/*
2
4 4 2
1 2
1 3
2 4
3 4
4 2 2
1 2
3 4
*/