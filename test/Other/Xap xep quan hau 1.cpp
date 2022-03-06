#include <iostream>
using namespace std;

int n,test=0, cot[10],xuoi[10],nguoc[10];

void quaylui(int i)
{
    for(int j=1;j<=n;j++)
	{
        if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j-1])
		{
            cot[j]=1; xuoi[i-j+n]=1; nguoc[i+j-1]=1;
            if(i==n) test++;
            else quaylui(i+1);
            
            cot[j]=0; xuoi[i-j+n]=0; nguoc[i+j-1]=0;
        }
    }
}

main()
{
	int T; cin >> T;
	for (int k=1;k<=T;k++)
	{
    cin>>n;
    quaylui(1);
    cout<<test;
    cout<<endl;
    }
}
