#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

bool comp(int a, int b) {
	return a>b;
}

ull Tong_nho_nhat (int a[], int n) {
	ull res=0;
	sort (a,a+n,comp);
	for (int i=0; i<n; i++)
		res+=a[i]*pow(10,i/2);		//8 6 5 4 3 2 - 246+358=604 - (8+6)+ 50+40 + 300+200
	
	return res;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		cout<<Tong_nho_nhat(a,n)<<endl;
	}
	return 0;
}
/*
2
6
6 8 4 5 2 3
5
5 3 0 7 4

604
82

vi du:
8 6 5 4 3 2 - 246+358=604 - (8+6)+ 50+40 + 300+200 -> tong se la min
0 3 4 5 7 - 047+35=82
*/

