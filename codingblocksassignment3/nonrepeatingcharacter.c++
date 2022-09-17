#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int n=s.length();
		map<char,vector<int>>m;
		for(int i=0;i<n;i++)
		{
			m[s[i]].push_back(i);
		}
		int x=0;
		for(int i=0;i<n;i++)
		{
			if(m[s[i]][0]==m[s[i]].back())
			{
				cout<<s[i]<<endl;
				x=1;
				break;
			}
		}
		if(!x)
		cout<<-1<<endl;
	}

	return 0;
}
