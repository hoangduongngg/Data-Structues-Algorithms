#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void Tam_giac_dac_biet (int a[], int n) {
	int A[MAX][MAX];
	int n0=n;
	for (int i=0; i<n; i++)
		A[n][i]=a[i];
	
	
	while (n>0) {	
		for (int i=0; i<n-1; i++)
			A[n-1][i]=A[n][i]+A[n][i+1];	
		n--;
	}
	
	for (int i=1; i<=n0; i++) {
		cout<<"[";
		for (int j=0; j<i-1; j++)
			cout<<A[i][j]<<" ";
		cout<<A[i][i-1]<<"] ";
	}
	cout<<endl;
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
[48] [20 28] [8 12 16] [3 5 7 9 ] [1 2 3 4 5 ]
*/
