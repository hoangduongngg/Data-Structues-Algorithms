#include <bits/stdc++.h>
using namespace std;

void Sinh_to_hop (int n, int k) {
	int a[k+5];
	for (int i=0; i<k; i++) a[i]=i+1;	// 1 2 3 ... k
	for (int i=0; i<k; i++) cout<<a[i];
	cout<<" ";
	
	int i=0;
	while (i>-1) {
		if (a[k-1]<n) a[k-1]++;			// so cuoi cung <n
		else for (i=k-2; i>=0; i--)
			if (a[i]<n && a[i]<a[i+1]-1) {		//cac so sau do
				a[i]++;
				for (int j=i+1; j<k; j++)
					a[j]=a[i]+j-i;
				break;
			}

		if (i>-1) {
			for (int i=0; i<k; i++)
				cout<<a[i];		
			cout<<" ";	
		}		
	}
	cout<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n, k; cin>>n>>k;
		Sinh_to_hop(n,k);
	}
	return 0;
}
/*
2
4  3
5  3

Output:
123 124 134 234
123 124 125 134 135 145 234 235 245 345
*/
