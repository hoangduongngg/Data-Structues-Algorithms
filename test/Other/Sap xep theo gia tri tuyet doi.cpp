#include <bits/stdc++.h>
using namespace std;

void Sort_Abs(int a[], int n, int x) {
	int b[n+5];
	for (int i=0; i<n; i++)
		b[i]=abs(x-a[i]);
	
	for (int i=0; i<n; i++)
		for (int j=0; j<n-1; j++)
			if (b[j]>b[j+1]) {
				swap(b[j], b[j+1]);
				swap(a[j], a[j+1]);
			}
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,x; cin>>n>>x;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		
		Sort_Abs(a,n,x);
	}
	return 0;
}
