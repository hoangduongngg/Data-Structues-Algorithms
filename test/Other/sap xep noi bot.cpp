#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int a[], int n) {
	for (int i=0; i<n; i++) {
		int dem=0;
		for (int j=0; j<n-1; j++)
			if (a[j]>a[j+1]) swap (a[j], a[j+1]);
			else dem++;
			
		if (dem==n-1) break;
		else {
			cout<<"Buoc "<<i+1<<": ";
			for (int i=0; i<n; i++) cout<<a[i]<<" ";
			cout<<endl;
		}
	}
}

int main() {
	int n; cin>>n;
	int a[n+5];
	for (int i=0; i<n; i++) cin>>a[i];
	Bubble_Sort (a,n);
	return 0;
}

/*

Cach 1: Cho chay tu dau day, neu 2 so lien nhau nho hon thi swap, tim dc so lon nhat o cuoi day

Cach 2: Cho chay tu cuoi day, neu 2 so lien tiep nho hon thi swap, tim dc so nho nhat o dau day

void Bubble_Sort(int a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=n-1; j>i; j--)
			if (a[j]<a[j-1]) swap (a[j], a[j-1]);
			
		cout<<"Buoc"<<i+1<<": ";
		for (int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
*/
