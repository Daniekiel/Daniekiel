#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,i,n;
	cin>>a>>b>>c>>d;
	i=c-a;
	n=d-b;
	if(n<60){
		n=n+60;
		i--;
	}
	cout<<i<<" "<<n;
	return 0;
 } 
