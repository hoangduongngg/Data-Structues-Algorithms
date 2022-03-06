#include <bits/stdc++.h>
using namespace std;

void Xau_ke_tiep(string s) {
	int l=s.size(), dem=0;
	for (int i=l-1; i>=0; i--)
		if (s[i]=='0') {
			s[i]='1';
			for (int j=i+1; j<l; j++) s[j]='0';
			break;
		}
		else dem++;
		
		if (dem==l)
			for (int i=0; i<l; i++)
				s[i]='0';
	cout<<s<<endl;
	
}
int main() {
	int t; cin>>t;
	cin.ignore();
	while (t--) {
		string s;
		cin>>s;
		Xau_ke_tiep(s);
	}
	return 0;
}
/*
2
010101
111111

Output:
010110
000000
