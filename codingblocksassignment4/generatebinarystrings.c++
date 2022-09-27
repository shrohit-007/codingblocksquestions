#include<bits/stdc++.h>
using namespace std;
void printstring(string s,int i,string ans)
{
	if(i==s.length())
	{
		cout<<ans<<" ";
		return;
	}
	if(s[i]=='?')
	{
		 printstring(s,i+1,ans+'0');
		 printstring(s,i+1,ans+'1');
	}
	else
	{
		 printstring(s,i+1,ans+s[i]);
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		printstring(s,0,"");
		cout<<endl;
	}
}
