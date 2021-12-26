#include <bits/stdc++.h>
using namespace std;

int main () {
	int t; cin >> t;
	while (t--) {
		int v,e;
		cin >> v >> e;				// nhap so dinh, canh
		vector<int> ke[v+1];		// tao mang 2 chieu
		
		for (int i=0; i<e; i++) {
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);		// them dinh b vao ds ke cua dinh a
			ke[b].push_back(a);		// them dinh a vao ds ke cua dinh b	
		}
		// sap xep
		for(int i=1; i<=v; i++)
			sort(ke[i].begin(), ke[i].end());
		
		//in gia tri	
		for(int i=1; i<=v; i++) {
			cout << i<<":";
			for (int j=0; j<ke[i].size(); j++)
				cout<<" "<<ke[i][j];
			cout << endl;
		}
	}
	return 0;
}
