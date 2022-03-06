#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull Noi_day_1 (int a[], int n) {
	ull res=0;			//chi phi, chieu dai
	for (int i=0; i<n-1; i++) {		//2 3 4 6
		sort (a,a+n);
		res+=a[i]+a[i+1];
		a[i+1]=a[i+1]+a[i];
		a[i]=0;						// 0 4 5 6
	}
	return res;
	
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n; i++)
			cin>>a[i];
		cout<<Noi_day_1(a,n)<<endl;
	}
	
	return 0;
}
/*
2
4
4 3 2 6
5
4 2 7 6 9

29
62

*/
