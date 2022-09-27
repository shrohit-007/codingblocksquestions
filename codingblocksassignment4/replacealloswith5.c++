#include<bits/stdc++.h>
using namespace std;
void printstring(string s,int i,string ans)
{
	if(i==s.length())
	{
		cout<<ans<<endl;
		return;
	}
	if(s[i]=='0')
	printstring(s,i+1,ans+'5');
	else
	printstring(s,i+1,ans+s[i]);
}
int main()
{
	string s;cin>>s;
	printstring(s,0,"");
}
