#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(vector<int>&v,int i,int target,vector<int>&ans)
{
	if(i==v.size())
	{
		int sum=0;
		for(auto &it:ans)
		sum+=it;
		if(sum==target)
		{
			cnt++;
			for(auto &it:ans)
			cout<<it<<" ";
			cout<<" ";
		}
		return;
	}
	ans.push_back(v[i]);
	generate(v,i+1,target,ans);
	ans.pop_back();
	generate(v,i+1,target,ans);
}
int main()
{
	int n;cin>>n;
	vector<int>v,ans;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	int target;cin>>target;
	generate(v,0,target,ans);
	cout<<endl;
	cout<<cnt<<endl;
}
