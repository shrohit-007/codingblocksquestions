#include<bits/stdc++.h>
using namespace std;
void printstring(string s,int i,string ans)
{
	if(i==s.size())
	{
		cout<<ans<<" ";
		return;
	}
	printstring(s,i+1,ans);
	printstring(s,i+1,ans+s[i]);
}
int main()
{
	string s;cin>>s;
	printstring(s,0,"");
	cout<<endl;
	cout<<pow(2,s.length())<<endl;
	
}
