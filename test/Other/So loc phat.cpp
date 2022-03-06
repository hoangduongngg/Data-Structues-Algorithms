#include <bits/stdc++.h>
#define MAX 5000
using namespace std;

int main() {
	long long a[MAX];
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int x=pow(2,n); 
		cout<<x<<endl;
		for (int i=0; i<n; i++) {
			a[i]=6;
			cout<<a[i];
		}
		cout<<" ";
		x--;
		while (x--) {
			
		
		for (int i=n-1; i>=0; i--) {
			if (a[i]==6) {
				a[i]=8;
				for (int j=i+1; j<n; j++) a[j]=6;
				break;
			}
		}
		
		for (int i=0; i<n; i++) cout<<a[i];
		cout<<" ";
		}
	cout<<endl;
	}
}
