#include <iostream>
#define MAX 100
using namespace std;
int n, k, a[MAX];

void Try(int i) {
	for (int j=0; j<=1;j++) {
		a[i]=j;
		if(i==n) {
			int dem=0;
			for (int m=1; m<=n; m++)
				if (a[m]==1) dem+=1;
			if (dem==k) {
				for(int m=1; m<=n; m++) cout << a[m];
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}

int main() {
	int T; cin>>T;
	while(T--) {
		cin >> n>>k;
		Try(1);
	}
	return 0;
}

