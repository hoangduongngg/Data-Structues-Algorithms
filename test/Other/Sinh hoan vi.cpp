#include <bits/stdc++.h>
using namespace std;

void Dao_day(int a[], int n, int x) {		//dao day a tu vi tri x den cuoi day
	for (int i=0; i<(n-x)/2; i++)
		swap(a[x+i], a[n-1-i]);
}

void Sinh_hoan_vi (int n) {
	int a[n+5];
	for (int i=0; i<n; i++) {	//sinh hoa vi bat dau
			a[i]=i+1;
			cout<<a[i];
		}
	cout<<" ";
			
	int i=n-2;		
	while (i>-1) {
		for (i=n-2; i>=0; i--)
		if (a[i]<a[i+1]) {
			int k=i+1;
			for (int j=i+1; j<n; j++)
				if (a[j]<a[k] && a[j]>a[i]) k=j;
			swap(a[i],a[k]);
			Dao_day(a,n,i+1);
			break;
		}
		
		if (i==-1) break;
		else
			for (int i=0; i<n; i++)
				cout<<a[i];
		cout<<" ";
	}
	cout<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		Sinh_hoan_vi(n);
	}
	return 0;
}

/*
2
2
3

12  21
123 132  213  231  312  321
*/
