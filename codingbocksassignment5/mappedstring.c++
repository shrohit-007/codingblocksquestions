#include<bits/stdc++.h>
using namespace std;
void generate(string &s,string ans,int ind)
{
	if(ind==s.length())
	{
		cout<<ans<<endl;
		return;
	}
	generate(s,ans+char((s[ind]-'1')+'A'),ind+1);
	if(ind<s.length()-1)
	{
		int x=stoi(s.substr(ind,2));
		if(x<26)
		{
			generate(s,ans+char(x-1+'A'),ind+2);
		}
	}

}
int main()
{
	string s;cin>>s;
	generate(s,"",0);
}
