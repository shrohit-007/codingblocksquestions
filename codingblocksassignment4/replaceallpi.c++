#include<bits/stdc++.h>
using namespace std;
void printstring(string s,int i,string ans)
{
	if(i>=s.length())
	{
		cout<<ans<<endl;
		return;
	}
	if(i+1<s.length() and s[i]=='p' and s[i+1]=='i')
	{
		printstring(s,i+2,ans+"3.14");
	}
	else
	{
		printstring(s,i+1,ans+s[i]);
	}
}
int main()
{
	int n;cin>>n;
	while(n--)
	{
		string s;cin>>s;
		printstring(s,0,"");
	}
}
