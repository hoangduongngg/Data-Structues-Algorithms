 #include <bits/stdc++.h> 
using namespace std; 
      
void printAllKLengthRec(char set[], string prefix, int n, int k) 
{ 
    if (k == 0) 
    { 
        cout << (prefix) <<" "; 
        return; 
    } 
  	for (int i = 0; i < n; i++) 
    { 
        string newPrefix; 
        newPrefix = prefix + set[i]; 
        printAllKLengthRec(set, newPrefix, n, k - 1); 
    } 
}  
void printAllKLength(char set[], int k,int n) 
	{ 
    printAllKLengthRec(set, "", n, k); 
	} 

int main() 
{ 
    char set1[] = {'A', 'B'}; 
    int T; cin >> T;
    while (T--)
    {
    int k; cin >> k;
    printAllKLength(set1, k, 2);
	cout<<endl; 
	}
} 

