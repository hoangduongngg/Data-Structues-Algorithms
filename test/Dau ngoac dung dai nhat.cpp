#include <bits/stdc++.h>
using namespace std;

int Dau_ngoac_dung (string str) {
	int l=0; //chieu dai day ngoac dung
	stack <int> s;
	int n=str.size();
	s.push(-1);		//truong hop dau ngoac dung o dau day, vd () thi l=1-(-1)=2, do 0 bi pop mat

	for (int i=0; i<n; i++) {
		if (str[i]=='(') s.push(i);
		if (str[i]==')') {
				if (!s.empty()) {
					s.pop();
				//	if (s.size()>0)
						l=max(l,i-s.top());		//chon gia tri max
				}
		//		if (s.empty()) s.push(i);
				
			}
	}
	return l;
}

int main() {
	int t; cin>>t;
	while (t--) {
		string str; cin>>str;
		cout<<Dau_ngoac_dung(str)<<endl;	
	}
	return 0;
}

/*
3
()))
)()())
()(()))))


2
4
6
*/
