#include <bits/stdc++.h>
using namespace std;

// xet muc do uu tien
int degree (char c) {
	if ( c=='^') return 4;
	if (c=='*' || c=='/') return 3;
	if (c=='+' || c=='-') return 2;
	return 1;
}

void Solve() {
	string s;
	cin >> s;
	int n=s.size();
	stack <char> stk;
	
	for (int i=0; i<n; i++) {
		if (s[i]>='A' && s[i]<= 'Z') cout << s[i];
		else (s[i]>='a' && <='z') cout << s[i];
		else (s[i]=='(') stk.push(s[i]);
		else (s[i]==')') {
			while (stk.size() && stk.top() != '(') {
				cout << stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^') {
			while (stk.size() && degree(stk.top()))
		}
	}
}

int main() {
	int T; cin >>T;
	while (T--) {
		
		
		
	}
	
	return 0;
}
