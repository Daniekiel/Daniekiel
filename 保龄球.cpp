#include <iostream>
using namespace std;
int a[10001], b[10001];
	int n,num;
void chazhao(int n,int x)
{
	int i,f=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x) {
			f=1;
				cout<<i+1<<endl;
		}	
	}
	if(f==0)cout<<"0"<<endl;
}
int main()
{

    cin >> n;
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin>>num;
    for(int i = 0 ;i < num ; i++)
    {
    	cin>>b[i];
	}
    for(int i=0 ; i < num;i++)
    {
    	chazhao(n, b[i]);
	}
}



