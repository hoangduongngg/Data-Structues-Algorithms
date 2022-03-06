#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

void Union(int a[], int n, int b[], int m) {
	int U[n+m],k=0;
	int check[MAX]={};
	for (int i=0; i<n; i++)
		if (!check[a[i]]) {
			U[k]=a[i];
			k++;
			check[a[i]]=1;
		}
	
	for (int i=0; i<m; i++)
		if (!check[b[i]]) {
			U[k]=b[i];
			k++;
			check[b[i]]=1;
		}
		
	sort(U, U+k);
	for (int i=0;i<k; i++) cout<<U[i]<<" ";
	cout<<endl;
}

void Intersection (int a[], int n, int b[], int m) {
	int I[n+m],k=0;
	int check[MAX]={};
	for (int i=0; i<n; i++)
		check[a[i]]=1;

	for (int i=0; i<m; i++)
		if (check[b[i]]==1) {
			I[k]=b[i];
			k++;
			check[b[i]]=0;
		}
		
	sort (I, I+k);
	for (int i=0;i<k; i++) cout<<I[i]<<" ";
	cout<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n,m; cin>>n>>m;
		int a[n+5], b[m+5];
		for (int i=0; i<n; i++) cin>>a[i];
		for (int i=0; i<m; i++) cin>>b[i];
		
		Union(a,n,b,m);
		Intersection(a,n,b,m);
	}
	return 0;
}

/*
1
5 3
1 2 3 4 5
1 2 3

Out:
1 2 3 4 5
1 2 3
*/
