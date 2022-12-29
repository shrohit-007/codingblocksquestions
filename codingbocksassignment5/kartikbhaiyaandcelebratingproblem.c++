#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	vector<vector<int>>v;
	map<int,int>m,m1;
	for(int i=0;i<n;i++)
	{
		vector<int>temp;
		for(int j=0;j<n;j++)
		{
			int a;cin>>a;
			if(a==1)
			{
				m[i]++;
				m1[j]++;
			}
		}
	}
	int f=0;
	for(auto &it:m1)
	{
		if(it.second==n-1 and m.find(it.first)==m.end())
		{
			cout<<it.first<<endl;
			f=1;
			break;
		}
	}
	if(!f)
	cout<<"No Celebrity"<<endl;
}
