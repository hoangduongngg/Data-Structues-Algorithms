#include <iostream>
using namespace std;
int a[100];

int i,j, n,k;
void doicho(int i,int j) {
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

void sxchon() {
	for (i=0; i<n-1; i++)
	for (j=i+1; j<n; j++)
		if (a[i]<a[j]) doicho(i,j);
	
}
int main() {
	int T; cin >> T;
	while (T--) {
			cin >> n>>k;
	for (int i=0; i<n; i++) cin >> a[i];
	sxchon();
	
	for (i=0; i<k-1; i++) cout << a[i]<<" ";
	cout<< a[k-1]<< endl;
	}
	return 0;
	
}
