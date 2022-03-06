#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort (int a[], int n) {		//sap xep chen
	for (int i=0; i<n; i++) {
		cout<<"Buoc "<<i<<": ";
		int temp=a[i];
		
		for (int j=i-1; j>=0; j--) {
			while (temp<a[j] && j>=0) {
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
			break;
		}
		
		for (int k=0; k<=i; k++) cout<<a[k]<<" ";
		cout<<endl;
	}
}

int main() {
	int n; cin>>n;
	int a[n+5];
	for (int i=0; i<n; i++) cin>>a[i];
	Insertion_Sort(a,n);
}
/*
4
5 7 3 2

Buoc 0: 5
Buoc 1: 5 7
Buoc 2: 3 5 7
Buoc 3: 2 3 5 7
*/
