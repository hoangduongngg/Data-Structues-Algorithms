#include <iostream>
#include <algorithm>
using namespace std;

int So_lan_xuat_hien (int a[], int n, int x) {
	int res=0;
	sort(a,a+n);
	int i=0;
	while (a[i]<=x) {
		if (a[i]==x) res++;
		i++;
	}
	if (res>0) return res;
	else return -1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,x; cin>>n>>x;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		
		cout<<So_lan_xuat_hien (a,n,x)<<endl;
	}
	return 0;
}

/* So lan xuat hien so X
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3

4
-1
*/
