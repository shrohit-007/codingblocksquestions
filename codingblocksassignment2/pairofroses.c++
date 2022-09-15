#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
	int n;cin>>n;
	map<int,int>m;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
		m[a]++;
	}
	int x;cin>>x;
	int f=0;
	int v1=0,v2=0,dif=INT_MAX;
	for(int i=0;i<n;i++)
	{
		m[v[i]]--;
		if(m[v[i]]==0)
		m.erase(v[i]);
		auto it=m.find(x-v[i]);
		if(it!=m.end())
		{
			int value=it->first;
				int dif1=abs(value-v[i]);
				if(dif1<dif)
				{
					v1=v[i];
					v2=value;
					dif=dif1;
				}
		}
	}
	cout<<"Deepak should buy roses whose prices are "<<min(v1,v2)<<" and "<<max(v1,v2)<<".\n";
	}
	return 0;
}
