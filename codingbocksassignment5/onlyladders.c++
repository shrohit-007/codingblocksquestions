#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(int n,vector<int>&v,unordered_map<int,int>&m,int sum)
{
	if(sum>=n)
	{
		if(sum==n)
		{
			cnt++;
			for(int i=0;i<v.size()-1;i++)
			{
				cout<<v[i]<<" ";
			}cout<<"END"<<" , ";
		}
		return;
	}
	if(m.find(sum)!=m.end())
	{
		v.push_back(m[sum]);
		generate(n,v,m,m[sum]);
		v.pop_back();
	}
	else
	{
	for(int i=1;i<=6;i++)
	{
		v.push_back(sum+i);
		generate(n,v,m,sum+i);
		v.pop_back();
	}}
}
int main()
{
	int n;cin>>n;
	vector<int>v,v2;
	v.push_back(0);
	for(int i=2;i<=n;i++)
	{
		int f=0;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			f=1;
		}
		if(!f)v2.push_back(i);
	}
	unordered_map<int,int>m;
	int i=0,j=v2.size()-1;
	while(i<j)
	{
		m[v2[i]]=v2[j];
		i++;
		j--;
	}
	generate(n,v,m,0);
	cout<<endl<<cnt<<endl;
}
