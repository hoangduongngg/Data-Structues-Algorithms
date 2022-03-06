#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int k=1;
		for (int i=1; i<=n; i++) k*=2;
		string s[k+3];
		s[1]="0";
		s[2]="1";
		
		if (n>1) {
			int t=2;
			for (int i=2; i<=n; i++) {
				int m=1;
				for (int j=1; j<=i; j++) m*=2;
				for (int j=1; j<=t; j++) {
					s[m-j+1]="1"+s[j];
					s[j]="0"+s[j];
				}
				t=m;
			}
		}
	
	for (int i=1; i<=k; i++)
		cout << s[i]<<' ';
	cout<< endl;
	}
}
