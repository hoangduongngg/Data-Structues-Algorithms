#include <iostream>
using namespace std;

int Uoc_chiahet_2 (int n) {
    if (n%2) return 0;
    int res = 1;
    for (int i=2; i<=n/2; i+=2) {
        if (n%i==0) res+=1;
    }
    return res;
}
int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        cout<<Uoc_chiahet_2(n)<<endl;
    }
}