#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	cin.ignore();
	while (t--) {
		string s; cin>>s;
		int n=s.size();
		int i=n-1;
		for (i=n-1; i>=0; i--) {
			if (s[i]=='1') {
				s[i]='0';
				for (int j=i+1; j<n; j++)
					s[j]='1';
				break;
			}
		}
		if (i==-1)
			for (int i=0; i<n; i++)
				s[i]='1';
			
		cout<<s<<endl;
	}
	return 0;
}
