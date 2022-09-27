#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int ind(int i,vector<int>v,int x)
{
	if(i==v.size())
	return -1;
	if(v[i]==x)
	return i;
	//cout<<i<<endl;
	return ind(i+1,v,x);
}
int main()
{
	int n;cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.pb(a);
	}
	int x;cin>>x;
	cout<<ind(0,v,x);
}
