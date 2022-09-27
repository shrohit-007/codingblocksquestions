#include<bits/stdc++.h>
using namespace std;
void ind(int i,vector<int>v,int x)
{
	if(i==v.size())
	return;
	if(v[i]==x)
	{
		cout<<i<<" ";
	}
	ind(i+1,v,x);
}
int main()
{
	int n ;cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	int x;cin>>x;
	ind(0,v,x);
}
