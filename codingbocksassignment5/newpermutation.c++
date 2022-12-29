#include<bits/stdc++.h>
using namespace std;
void generate(string &s,int ind,string ans)
{
    if(ind==s.length())
    {
        cout<<ans<<" ";
        return;
    }
    if(s[ind]>='0' and s[ind]<='9')
    {
        generate(s,ind+1,ans+s[ind]);
    }
    else if(s[ind]>='a' and s[ind]<='z')
    {
        generate(s,ind+1,ans+s[ind]);
        generate(s,ind+1,ans+char(s[ind]-32));
    }
    else if(s[ind]>='A' or s[ind]<='Z')
    {
        generate(s,ind+1,ans+char(s[ind]+32));
        generate(s,ind+1,ans+s[ind]);
    }
}
int main()
{
	string s;cin>>s;
	generate(s,0,"");
}
