//so N rat lon: su dung nhan ma tran
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
// tao kieu mang
struct Matrix {
    long long f[2][2];
};

//ham nhan 2 ma tran
Matrix operator* (Matrix A, Matrix B) {
    Matrix res;
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=1; j++) {
            res.f[i][j]=0;
            for (int k=0; k<=1; k++) {
                //res.f[i][j] += A.f[i][k] * B.f[k][j];
                res.f[i][j] = (res.f[i][j] + (A.f[i][k] * B.f[k][j]) %mod ) %mod;
            }
        }
    }
    return res;
}

//ham tinh luy thua ma tran (giong ham tinh luy thua 2 so lon)
Matrix powerMod (Matrix A, int n) {
    if (n==1) return A;
    Matrix x = powerMod(A, n/2);
    if (n%2==0) return x*x;
    return A*x*x;
}
//ham tinh gtri: F[n] = res.f[0][1] = res.[1][0]
long long tinh (int n) {
    Matrix A;
    A.f[0][0] = 1;
    A.f[0][1] = 1;
    A.f[1][0] = 1;
    A.f[1][1] = 0;

    Matrix res = powerMod(A, n);
    return res.f[0][1];
}
main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >>n;
        cout << tinh(n) << endl;
    }
}