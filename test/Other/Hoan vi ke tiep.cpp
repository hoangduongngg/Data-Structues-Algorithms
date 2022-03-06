#include <bits/stdc++.h>
using namespace std;

void Dao_day(int a[], int n, int x) {		//dao day a tu vi tri x den cuoi day
	for (int i=0; i<(n-x)/2; i++)
		swap(a[x+i], a[n-1-i]);
}

void Hoan_vi_ke_tiep (int a[], int n) {
	int i=n-2;
	for (i=n-2; i>=0; i--)
		if (a[i]<a[i+1]) {
			int k=i+1;
			for (int j=i+1; j<n; j++)
				if (a[j]<a[k] && a[j]>a[i]) k=j;
			swap(a[i],a[k]);
			Dao_day(a,n,i+1);
			break;
		}
		
	if (i==-1)
		for (int i=1; i<=n; i++) cout<<i<<" ";
	else
		for (int i=0; i<n; i++)
			cout<<a[i]<<" ";
	cout<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n; i++)
			cin>>a[i];
			
		Hoan_vi_ke_tiep(a,n);
	}
	return 0;
}

/*
2
5 
1  2  3  4  5
5
5  4  3  2  1

1 2  3  5  4
1 2  3  4  5
*/
