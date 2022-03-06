#include <bits/stdc++.h>
using namespace std;

int Mua_luong_thuc(int n, int s, int m) {
	int x=(s-s/7)*n;		//luong mua toi da
	int y=s*m;				//luong tieu thu
	if (x<y) return -1;
	
	if (y%n==0) return y/n;
	else return y/n+1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,s,m;
		cin>>n>>s>>m;
		cout<<Mua_luong_thuc(n,s,m)<<endl;
	}
	return 0;
}

/*
2
16 10 2
20 10 30

2
-1

n:luong mua toi da/ngay
s:so ngay
m:luong tieu thu/ngay
*/
