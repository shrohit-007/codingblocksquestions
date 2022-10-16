#include<bits/stdc++.h>
using namespace std;
void smaller(string ans,string s,int n,int curr,vector<string>&ans1)
{
	if(curr==n)
	{
		ans1.push_back(ans);
		return;
	}
	for(int i=curr;i<n;i++)
	{
		swap(ans[curr],ans[i]);
		smaller(ans,s,n,curr+1,ans1);
		swap(ans[curr],ans[i]);
	}
}
int main()
{
	string s;cin>>s;
	string t=s;
	sort(t.begin(),t.end());
	int n=s.length();
	vector<string>ans1;
	smaller(t,s,n,0,ans1);
	sort(ans1.begin(),ans1.end());
	for(int i=0;i<ans1.size();i++)
	{
		if(ans1[i]<s)
		{
			cout<<ans1[i]<<endl;
		}
	}
}
