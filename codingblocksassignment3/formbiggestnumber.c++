#include<bits/stdc++.h>
using namespace std;
bool comparr(string a,string b)
{
	string a1=a.append(b);
	string b1=b.append(a);
	for(int i=0;i<a1.length();i++)
	{
		if(a1[i]>b1[i])
		return true;
		else if(a1[i]<b1[i])
		return false;
	}
	return true;
}
int main() {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<string>v;
		for(int i=0;i<n;i++)
		{
			string a;cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),comparr);
		for(int i=0;i<v.size();i++)
		cout<<v[i];
		cout<<endl;
	}
	return 0;
}
