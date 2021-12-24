#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		sort(a,a+n);
		int i=1;
		for (;i<n; i++)
			if (a[i]!=a[0]) {
				cout<<a[0]<<" "<<a[i]<<endl;
				break;
			}
		if (i==n) cout<<-1<<endl;
	}
	return 0;
}

/* So nho nhat va so nho thu 2
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1  1  1

1 2
-1
