#include <bits/stdc++.h>
using namespace std;

void Selection_Sort (int a[], int n) {
	for (int i=0; i<n-1; i++) {
		cout<<"Buoc "<<i+1<<": ";
		int min=i;
		for (int j=i+1; j<n; j++)
			if (a[j]<a[min]) min=j;	
		swap(a[i], a[min]);	
		for (int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}

int main() {
	int n; cin>>n;
	int a[n+5];
	for (int i=0; i<n; i++) cin>>a[i];
	Selection_Sort(a,n);
}
/*
4
5 7 3 2

Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
/*
void Selection_Sort (int a[], int n) {
	for (int i=0; i<n-1; i++) {
		int min=i;
		for (int j=i+1; j<n; j++)
			if (a[j]<a[min]) min=j;	
		swap(a[i], a[min]);	
	}
}
*/
