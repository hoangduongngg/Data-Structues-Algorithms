#include<bits/stdc++.h>
using namespace std;

int Sap_dat_xau(string s) {
	int l=s.size();
	int check[100]={};
	
	for (int i=0; i<l; i++) {
		int k=(int) (s[i]-'0');
		check[k]++;
		if (l%2==0 && check[k]>(l/2)) return -1;	//baba
		if (l%2==1 && check[k]>(l/2+1)) return -1;		//babab
	}
	return 1;
}

int main() {
	int t; cin >>t;
	cin.ignore();
	while (t--) {
		string s; cin>>s;
		cout<<Sap_dat_xau(s)<<endl;
	}
	
	return 0;
}
/*
3
geeksforgeeks
bbbabaaacd
bbbbb

1
1
-1
*/
