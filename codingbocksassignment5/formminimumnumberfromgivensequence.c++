#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int n=s.length();
		int c=0;
		string ans="";
		int j=1;
	    for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                c++;
                int k=j;
                while(c>0)
                {
                    ans+=char(k+'0');
                    k--;
                    c--;
                }
                c=0;
            }
            else
            {
                c++;
            }
            j++;
        }
        c++;
        while(c>0)
        {
            ans+=char(j+'0');
            j--;
            c--;
        }
		cout<<ans<<endl;
	}
	return 0;
}
