#include <iostream>
using namespace std;
int a[100]={0},s,p,n,test,result[100],run;

void output(){
    for(int i=1;i<run;i++)
	{
        cout<<result[i]<<" ";
        if(i%n==0) cout<<endl;
    }
}

void write(){
    for(int i=1;i<=n;i++){
        result[run]=a[i];
        run++;
    }
}

bool ktraS(){
    int temp=0;
    for(int i=1;i<=n;i++) temp+=a[i];
    if(temp==s) return true; 
    return false;
}

bool SNT(int n){
    if(n<2) return false;
    if(n==2) return true;
    
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

void Try(int i){
    for(int j=a[i-1]+1;j<=s-n+i;j++){
       while(!SNT(j)&&j<=s-n+i) j++;
        a[i]=j;
        if(i==n){
            if(ktraS()){
                test++;
                write();
            }
        } else Try(i+1);
    }
}

main(){
    int T; cin>>T;
    while(T--){
        test=0; run=1;
        cin>>n>>p>>s;
        a[0]=p-1;
        Try(1);
        cout<<test<<endl;
        if(test) output(); 
    }
}
