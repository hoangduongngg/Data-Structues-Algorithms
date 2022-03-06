#include<bits/stdc++.h>
#define MAX 200
using namespace std;

int main() {
	stack <int> stk;
	stack <int> stk2;		// tao 1 stack copy de show 
	while (1) {
		string s; cin>>s;
		if (s=="push") {
			int x; cin>>x;
			stk.push(x);
			stk2.push(x);
			
		}
		if (s=="pop" && !stk.empty()) {
			stk.pop();
			stk2.pop();
		}
		if (s=="show")
			if (stk.empty()) cout<<"empty"<<endl;
			else {
				int a[MAX], k=0;
				while (!stk2.empty()) {
					a[k]=stk2.top();
					stk2.pop();
					k++;
				}
				for (int i=k-1; i>=0; i--) cout<<a[i]<<" ";
				cout<<endl;
			}
	}
	return 0;
}
