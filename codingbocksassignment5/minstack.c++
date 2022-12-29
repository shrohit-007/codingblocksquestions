#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;cin>>n;
	vector<pair<int,int>>v;
	vector<string>q;
	int x=0;
	for(int i=0;i<n;i++)
	{
		string s;cin>>s;
		q.push_back(s);
		if(s=="push")x++;
	}
	for(int i=0;i<n;i++)
	{
		if(q[i]=="push")
		{
			int a;cin>>a;
			if(v.empty())
			{
				v.push_back({a,a});
			}
			else
			{
				int x=min(a,v[v.size()-1].second);
				v.push_back({a,x});
			}
		}
		else if(q[i]=="pop")
		v.pop_back();
		else if(q[i]=="getMin")
		cout<<v[v.size()-1].second<<" ";
		else if(q[i]=="top")
		cout<<v[v.size()-1].first<<" ";
	}
	return 0;
}
