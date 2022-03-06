#include <bits/stdc++.h>
#define MAX 100
using namespace std;
typedef long long ll;

ll Change(ll n, ll x, ll y){
	ll a[MAX], k=0;
	while (n>0) {
		a[k]=n%10;k++;
		n/=10;
	}
	for (ll i=0; i<k; i++) {
		if (a[i]==x) a[i]=y;
		n+=a[i]*pow(10,i);
	}
	return n;
}

ll Tong_max(ll a, ll b) {
	return Change(a,5,6)+Change(b,5,6);
}
ll Tong_min(ll a, ll b) {
	return Change(a,6,5)+Change(b,6,5);
}

int main() {
	ll a,b; cin>>a>>b;
	cout<<Tong_min(a,b)<<" "<<Tong_max(a,b);
	return 0;
}

/*
11 25
1430 4862
16796 58786

36 37
6282 6292
74580 85582
*/
