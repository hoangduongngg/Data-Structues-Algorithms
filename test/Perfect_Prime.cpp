#include <bits/stdc++.h>
using namespace std;

bool SNT(int n) {
    if (n==2)
        return 1;
    if (n<2 || n%2==0)
        return 0;
    for (int i=3; i*i<=n; i+=2)
        if (n%i==0)
            return 0;
    return 1;
}
    
bool Ktra_cs (int n) {
    int a[20], l=0;
    while (n>0) {
        int tmp = n%10;
        if (SNT(tmp)==0) return 0;
        a[l]=tmp;
        l++;

        n/=10;
    }
    int x=0;
    for (int i=0; i<l; i++) {
        x+=pow(10,l-i-1)*a[i];
    }
    if (SNT(x)) return 1;
    return 0;
}

void Check(int n) {
    if (SNT(n) && Ktra_cs(n)) cout <<"Yes" <<endl;
    else cout << "No" << endl;
}

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        Check(n);
    }
}