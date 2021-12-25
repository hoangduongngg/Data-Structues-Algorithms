#include <iostream>
#include <string>
const long long mod = 1e9+7;
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
	int n,k;
	cin >> n >> k;
	long long S[n+2]={0}; //so cach buoc den bac i
	S[0] =S[1] = 1;
	for ( int i = 2; i <= n; i++) {
		for (int j=1; j<=min(i,k); j++) {
			S[i]+=S[i-j];
			S[i]%=mod;
		}
	}
	cout << S[n]<<endl;
	}
	return 0;
}
