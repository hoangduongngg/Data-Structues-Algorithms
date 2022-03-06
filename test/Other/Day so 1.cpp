#include <bits/stdc++.h>
using namespace std;

void Tam_giac_dac_biet (int a[], int n) {
	while (n>0) {
		cout<<"[";
		for (int i=0; i<n-1; i++)
			cout<<a[i]<<" ";
		cout<<a[n-1]<<"]"<<endl;
		
		int a1[n];
		for (int i=0; i<n-1; i++)
			a1[i]=a[i]+a[i+1];
			
		n--;
		for (int i=0; i<n; i++)
			a[i]=a1[i];
	}
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n;i++) cin>>a[i];
		Tam_giac_dac_biet (a,n);
		
		
	}
	return 0;
}
/*
1
5
1 2 3 4 5

Output:
[1 2 3 4 5]
[3 5 7 9]
[8 12 16]
[20 28]
[48]
*/
