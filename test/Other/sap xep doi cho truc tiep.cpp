#include <bits/stdc++.h>
using namespace std;

void Sort_Truc_Tiep (int a[], int n) {		//in theo yeu cau de bai
	for (int i=0; i<n-1; i++) {
		cout<<"Buoc "<<i+1<<": ";
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) swap(a[i],a[j]);
		for (int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}

int main() {
	int n; cin>>n;
	int a[n+5];
	for (int i=0; i<n; i++) cin>>a[i];
	Sort_Truc_Tiep (a,n);
	return 0;
}
/*
Input:
4
5 7 3 2

Output:
Buoc 1: 2 7 5 3
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
*/

/*
void Sort_Truc_Tiep (int a[], int n) {		//Ham tong quat
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) swap(a[i],a[j]);
}
*/
