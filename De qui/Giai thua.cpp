#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull gthua (int n) {
	if (n==0) return 1;
	else return gthua(n-1)*n;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		cout<<gthua(n)<<endl;
	}
	return 0;
}
