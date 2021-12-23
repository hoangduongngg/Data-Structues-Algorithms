#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int SCS(ull n) {		//n!=0
	if (n==0) return 0;
	else return SCS(n/10)+1;
}

void Run(ull n) {
	if (n==0) cout<<1;
	else cout<<SCS(n);
	cout<<endl;
}
	
int main() {
	int t; cin >>t;
	while (t--) {
		ull n; cin>>n;
		Run(n);
	}
	return 0;
}


/*
Cach 2: Dung vong lap:
int SCS(int n) {
	int res=0;
	while (n>0){
		n=n/10;
		res++;
	}
	return res;
}
	*/
