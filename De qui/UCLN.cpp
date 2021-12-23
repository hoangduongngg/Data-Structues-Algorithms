#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull UCLN (int m, int n) {
	if (n==0) return m;
	else return UCLN(n, m%n);
}
int main() {
	int t; cin>>t;
	while (t--) {
		int m,n; cin>>m>>n;
		if (n>m) swap(n,m);		//m>n
		cout<<UCLN(m,n)<<endl;
	}
	return 0;
}

// vi du: UCLN(18,12)=UCLN(12,6)=UCLN(6,6)=UCLN(6,0)=6
