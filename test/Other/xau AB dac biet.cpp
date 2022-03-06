#include <bits/stdc++.h>
using namespace std;
int a[100], n, k;
string s="";
vector<string> res;

void Try(int i) {
	for (int j=0; j<=1; j++) {
		a[i]=j;
		if (i==n-k) {
			for (int m=1; m<=n-k; m++) {
				if (m==1 && a[m]==1) {
					string tmp = "";
					tmp+= s;
					for (int p=1; p<=n-k; p++) {
						if (a[p]==0) tmp+= "A";
						else tmp+="B";
					}
					res.push_back(tmp);
				}
				if (m==n-k && a[m]==1) {
					string tmp = "";
					for (int p=1; p<=n-k; p++) {
						if (a[p]==0) tmp+= "A";
						else tmp+="B";
					}
					tmp+= s;
					res.push_back(tmp);
				}
				if (a[m] && a[m-1] && m>1) {
					string tmp = "";
					for (int p=1; p<=n-k; p++) {
						if (p==m) tmp+=s; 
						if (a[p]==0) tmp+= "A";
						else tmp+="B";
					}
					res.push_back(tmp);
				}
				
			}
		}
		Try (i+1);
	}
}

int main() {
	
	cin >> n >> k;
	for (int i=0; i<k; i++) s+="A";
	
	Try(1);
	sort(res.begin(), res.end());
	cout << res.size() << endl;
	for (int i=0; i<res.size(); i++) 
		cout << res[i] << endl;
	return 0;
}
