#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void generate(string s,vector<string>&v,string ans,int i)
{
	if(i==s.length())
	{
		cout<<ans<<" ";
		cnt++;
		return;
	}
	int x=s[i]-'0';
	string temp=v[x];
	for(int j=0;j<temp.length();j++)
	{
		generate(s,v,ans+temp[j],i+1);
	}
}
int main()
{
	string n;cin>>n;
	vector<string>v={"0","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
	generate(n,v,"",0);
	cout<<endl;
	cout<<cnt<<endl;
}
