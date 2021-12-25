#include <bits/stdc++.h>
#define max 1001
using namespace std;
int n,v;
int a[max],c[max], cmax[max][max]; // cmax: giatri lon nhat co the mang 
int solve(){
    for(int i=0;i<=v;i++) cmax[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int l=1;l<=v;l++){
            cmax [i][l]= cmax[i-1][l];
            if( a[i]<=l && cmax[i-1][l-a[i]]+c[i]> cmax[i-1][l])
                cmax[i][l] = cmax[i-1][l-a[i]]+c[i];
        }
    }
}

int main() {
    int t;cin>>t;
    while(t--){
        memset( cmax,0,sizeof(cmax));
        cin>>n>>v;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>c[i];
        solve();
        cout<< cmax[n][v]<<endl;
    }
    return 0;
}
