#include <bits/stdc++.h>
using namespace std;
int n,f[51];

int res(){
    f[0]=1;
    for(int i=1;i<=n;i++){
        f[i]=0;
        for(int j=1;j<=3;j++){
            if(j<=i) f[i]+=f[i-j];
        }
    }
    return f[n];
}
main(){
    int t;cin>>t;
    if (1<=t<=100) {
    	while(t--){
        cin>>n; 
        if (1<=n<=50) {
        	cout<<res()<<endl;
		}
    	}
	}
}


