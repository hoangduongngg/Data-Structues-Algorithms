#include <bits/stdc++.h>
using namespace std;

void Xau_nhi_phan_kbit_1(int n, int k) {
	//sinh xau ban dau:
	int a[n+5];
	for (int i=0; i<k; i++)	a[i]=0;
	for (int i=k; i<n; i++)	a[i]=1;
	for (int i=0; i<n; i++) cout<<a[i];
	cout<<endl;
	
	int dem=0;
	while (dem<k) {
		for (int i=n-1; i>=0; i--) {
		if (a[i]==0) {
			for (int j=0; j<i; j++)
				if (a[j]==1) dem++;
			if (dem==k) break;
			
			a[i]=1; dem++;
			if (dem==k) break;
			
			for (int j=i+1; j<=n-(k-dem); j++) a[j]=0;
			for (int j=n-(k-dem); j<n; j++) a[j]=1;
		}
		cout<<endl;	
		
		}
	}
}

int main() {
	int n,k; cin>>n>>k;
	Xau_nhi_phan_kbit_1(n,k);
	
	return 0;
}

/*
2
4 2
3 2

0011
0101
0110
1001
1010
1100
011
101
110

*/
