#include <iostream>
#include <cmath>
using namespace std;
int n, t, a[200];

void input() {
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
}

int MaxCrossingSum(int a[], int L, int R) {
    int S=0, MaxL, MaxR, m = (L+R)/2;
    MaxL = MaxR = a[m];
    for (int i=m; i>=L; i--) {
        S += a[i];
        if (S>MaxL) MaxL=S;
    }
    S=0;
    for (int i=m+1; i<=R; i++) {
        S += a[i];
        if (S>MaxR) MaxR=S;
    }
    cout<<MaxL+MaxR<<" ";
    return MaxL+MaxR;
}

int Day_con_max (int a[], int L, int R) {
    if (L==R) return a[L];
    int m = (L+R)/2;        //middle
    return max( Day_con_max(a,L,m), max (Day_con_max(a, m+1, R), MaxCrossingSum(a,L,R)) );
}

int main() {
    cin>>t;
    while (t--) {
        input();
        cout<<Day_con_max(a,0,n-1)<<endl;
    }
}