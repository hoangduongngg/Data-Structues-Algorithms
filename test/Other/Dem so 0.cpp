#include <iostream>
using namespace std;

const int MAX = 1e6;
int i, n, T;
int a[MAX];


void ktra()
{	 
	cin>>n;
	for(i=0; i<n;i++) cin>>a[i];
	int dem=0;
	if (a[n/2]==0)
	{ 	dem=n/2;
		for (int i=n/2+1; i<=n;i++)
		{	if (a[i]==0) dem++;}
	}
	else 
	{	for (int i=0; i<n/2;i++)
		{	if (a[i]==0) dem++;}
	}
	cout <<dem<<endl;
}

int main()
{	cin>> T;
	while(T--) ktra();
}
