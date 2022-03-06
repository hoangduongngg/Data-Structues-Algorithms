#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >>n;
	stack <int> stk;
	
	while (n--) {
		string s; cin>>s;
		if (s=="PUSH") {
			int x; cin>>x;
			stk.push(x);
		}
		if (s=="POP" && !stk.empty()) stk.pop();
		if (s=="PRINT")
			if (!stk.empty()) cout<<stk.top()<<endl;
			else cout<<"NONE"<<endl;
	}
	
	return 0;
}
/*
9
PUSH 1
PUSH 2
POP
PRINT
PUSH 3
PRINT
POP
POP
PRINT


1
3
NONE
*/
