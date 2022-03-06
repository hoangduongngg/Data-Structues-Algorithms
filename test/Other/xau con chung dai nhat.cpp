#include <iostream>
#include <string.h>
#define MAX 1000
using namespace std;

int t[MAX][MAX];
char s1[MAX];
char s2[MAX];
int i,j;

int main() {
	int T; cin >> T;
	while (T--) {
	cout << "Nhap xau s1:"; cin >> s1;
	cout << "Nhap xau s2:"; cin >> s2;
	int n = strlen(s1);
	int m = strlen(s2);
	
	for (i = 0; i <= n; i++)
	for (j = 0; j <= m; j++)
		t[0][i] = t[j][0] = 0;

	for (i = 1; i <= n; i++)
	for (j = 1; j <= m; j++) {
		if (s1[i] == s2[j]) t[i][j] = t[i - 1][j - 1] + 1;
		else t[i][j] = max(t[i - 1][j], t[i][j - 1]);
		}
	cout << t[n][m]<< endl;
	}
}
