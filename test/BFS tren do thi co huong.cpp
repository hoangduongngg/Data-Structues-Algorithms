#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool chuaxet[1001];

void BFS(int u) {
	queue<int> q;
	q.push(u);
	while (q.size()>0) {
		int top=q.front();
		q.pop();
		cout << top<<" ";
		chuaxet[top]=true;
		for(int i=0; i<ke[top].size(); i++) {
			if( !chuaxet[ke[top][i]]) {
				chuaxet[ke[top][i]]=true;
				q.push(ke[top][i]);
			}
		}
	}
	
}

int main() {
	int t; cin >>t;
	while(t--) {
		for(int i=0; i<1001; i++)
			ke[i].clear();
		memset(chuaxet, false, sizeof(chuaxet));
		
		int a,b,nguon;			// dinh, canh, dinh bat dau duyet
		cin >>a>>b>>nguon;
		
		for (int i=0; i<b; i++) {
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
		}
		
		BFS(nguon);
		cout << endl;
	}
	return 0;
}
