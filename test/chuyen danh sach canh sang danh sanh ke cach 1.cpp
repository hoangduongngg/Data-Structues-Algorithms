#include <iostream>
using namespace std;
int a[100][100];

int main() {
	int T; 
	cin >> T;
	while (T--) {
		int V, E;
		cin>>V>>E;
		if ((E>=1)&&(E<=(V*(V-1)/2))) {
			for (int i=1; i<=E; i++)
				for (int j=1; j<=2; j++)
					cin>> a[i][j];
					
			for (int u=1; u<=V; u++) {
				cout << u<<": ";
				for (int i=1; i<=E; i++) {
						if (a[i][1]==u) cout << a[i][2]<<" ";
						if (a[i][2]==u) cout << a[i][1]<<" ";
					}
				cout << endl;
			}
		}
		else cout << "V, E khong thoa man";	
	}
}
