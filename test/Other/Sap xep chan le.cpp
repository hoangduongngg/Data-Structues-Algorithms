#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	int a[n+5], chan[n], le[n];
	int k=0, l=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if ((i+1)%2==0) {
			chan[k]=a[i];
			k++;
		}
		else {
			le[l]=a[i];
			l++;
		}
	}
	
	sort(chan, chan+k);
	sort(le, le+l);
	l=0;	
	for (int i=0; i<n; i++) {
		if ((i+1)%2==0) {
			cout<<chan[k-1]<<" ";
			k--;
		}
		else {
			cout<<le[l]<<" ";
			l++;
		}
	}
}

/*
4
1 2 3 4
Output:
1 4 3 2

Y tuong: xep nhu bt nhung i=1 thi hieu la i=0 +1
*/
