#include <bits/stdc++.h>
using namespace std;

int Doi_tien(int n) {
	int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int res=0, i=9;
	while (n>0) {
		if (n/a[i]>0) {
			res+=n/a[i];
			n=n%a[i];
		}
	i--;	
	}
	return res;
	
	
}
int main () {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		cout<<Doi_tien(n)<<endl;
	}
}
/*
2
70
121

2
3
*/
