#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a=0,b=0;
	double s1=0,s2=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		if(i/k==0)
		{
			a+=i;
			s1++;
		}
		else
		{
			b+=i;
			s2++;
		}
	}
	printf("%.1lf",s1);
	cout<<" ";
	printf("%.1lf",s2);
	return 0;
}
