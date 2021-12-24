#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
	return a>b;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		sort(a,a+n, comp);
		for (int i=0; i<k; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

/* Tim K phan tu lon nhat cua mang
2
5 3
10 7 9 12 6
6 2
9 7 12 8 6 5

12 10 9
12 9
*/
