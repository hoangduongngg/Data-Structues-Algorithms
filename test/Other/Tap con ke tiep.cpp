#include <bits/stdc++.h>
using namespace std;

void Tap_con_ke_tiep(int n, int k, int a[]) {
	int i;
	if (a[k-1]<n) a[k-1]++;			// so cuoi cung <n
	else {
		for (i=k-2; i>=0; i--)
		if (a[i]<n && a[i]<a[i+1]-1) {		//cac so sau do
			a[i]++;
			for (int j=i+1; j<k; j++)
				a[j]=a[i]+j-i;
			break;
		}
	}
	
	if (i==-1)
		for (int i=1; i<=k; i++)
			cout<<i<<" ";
	else
		for (int i=0; i<k; i++)
			cout<<a[i]<<" ";
			
	cout<<endl;
	
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n, k; cin>>n>>k;
		int a[k+5];
		for (int i=0; i<k; i++) cin>>a[i];
		Tap_con_ke_tiep(n,k,a);
	}
	return 0;
}
/*
2
5  3
1  4  5
5  3
3  4  5

Output:
2  3  4
1  2  3
*/
