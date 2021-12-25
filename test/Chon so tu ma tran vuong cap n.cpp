#include <bits/stdc++.h>
#define MAX 100
using namespace std;
int n, k, res;
int a[MAX][MAX], x[MAX];
bool ok[MAX];
vector<int> Res;

void Try(int i) {
	for (int j=1; j<=n; j++)
		if (!ok[j]) {
			x[i]=j;
			ok[j]=1;
			if (i==n) {
				res=0;
				for (int m=1; m<=n; m++)
					res+=a[m][x[m]];
				if (res==k) {
					for (int m=1; m<=n; m++)
						Res.push_back(x[m]);
				}
			}
			else Try(i+1);
			ok[j]=0;
		}
}

int main() {
	cin  >> n >>k;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++)
			cin >> a[i][j];
	}
	
	Try(1);
	
	cout << Res.size()/n << endl;
	for (int i=0; i<Res.size(); i++) {
		if (i%n==0) cout << endl;
		cout<<Res[i]<< ' ';
	}
		 
		 
	return 0;
}
