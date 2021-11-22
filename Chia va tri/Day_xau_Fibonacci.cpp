#include <bits/stdc++.h>
using namespace std;
long long F[100];

char Fibo_word (int n, long long k) {
    if (n==1) return 'A';
    if (n==2) return 'B';

    if (k <= F[n-2]) return Fibo_word (n-2, k);
    return Fibo_word (n-1, k - F[n-2]);
}
main () {
    //tao 1 mang luu cac so fibo: do dai cua xau
    F[0] = 0; F[1] = 1;
    for (int i=2; i<93; i++) F[i] = F[i-1] + F[i-2];

    int t,n; long long k;
    cin >> t;
    while (t--) {
        cin >>n >>k;
        cout << Fibo_word(n,k) << endl;
    }
}
