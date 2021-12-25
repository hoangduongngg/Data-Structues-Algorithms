#include<bits/stdc++.h>
using namespace std;

void Chia_mang(int a[], int n, int k) {
	sort(a,a+n);
	if (k>n/2) k=n-k;		//mang k co it phan tu hon
	int res=0;
	for (int i=0; i<k; i++)
		res-=a[i];
	for (int i=k; i<n; i++)
		res+=a[i];
	cout<<res<<endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		Chia_mang(a,n,k);
	}
	
	return 0;
}
/*
2
5 2
8 4 5 2 10		
8 3
1 1 1 1 1 1 1 1

17
2


vi du: 2 4 5 8 10 - hieu nho nhat -> cac so nho la so tru, cac so lon la so bi tri
*/
