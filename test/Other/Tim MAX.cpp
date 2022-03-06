#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const long long p=1e9+7;

ull Max (int a[], int n) {
	sort(a,a+n);
	ull res=0;
	for (int i=0; i<n; i++)
		res=(res+(a[i]*i)%p)%p;
		
	return res;
}
int main () {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		cout<<Max(a,n)<<endl;
	}
}
/*
2
5
5 3 2 4 1
3
1 2 3

40
8
*/
