#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;
long long  p = pow(10,9)+7;

int C[MAX][MAX];
int i,j, n,k;

int main() {
	int T; cin >> T;
	while (T--) {
	cin >> n >> k;
	
	for (j = 1; j <= n; j++) {
		C[0][j]=1;
		C[1][j]=j;
	}
	
	for (i=1; i<=k; i++)
	for (j=2; j<=n; j++)
		C[i][j]=C[i][j-1]+C[i-1][j-1]%p;
		
	cout << C[k][n]<< endl;
	}
}
