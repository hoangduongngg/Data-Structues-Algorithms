#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;
int a[MAX], n, i, j;

void nhap() {
	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
}

void doicho() {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int main() {
	int T; cin>>T;
	while (T--) {
		
	nhap();
	for (i = 0; i < n - 1; i++)
	for (j = i + 1; j < n; j++)
	if (a[i] > a[j]) doicho();

	if (a[0]<a[1]) cout << a[0]<<" "<<a[1]<<" ";
	else cout << "-1";
	cout << endl;
	}
}
