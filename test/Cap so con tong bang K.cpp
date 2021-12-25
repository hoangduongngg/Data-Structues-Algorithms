#include <bits/stdc++.h>
using namespace std;

int Dem_cap_so_tong_bang_K (int a[], int n, int k) {
	int res=0;
	sort (a,a+n);
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++) {
			if (a[i]+a[j]==k) res++;
			if (a[i]+a[j]>k) break;
		}
	return res;
}
int main () {
	int t; cin >>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		cout<<Dem_cap_so_tong_bang_K(a,n,k)<<endl;
	}
	return 0;
}

/* Cap so con tong bang K
2
5 9 
1 5 4 1 2
3 2
1 1 1

1
3
*/
