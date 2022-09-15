#include<bits/stdc++.h>
#define ll long long
#define mod 1000000000+7
using namespace std;
int main()
{
	int n;cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		sum+=a;
	}
	int q;cin>>q;
	while(q--)
	{
		int a;cin>>a;
		sum*=2;
		sum%=mod;
	}
	cout<<sum<<"\n";
}
