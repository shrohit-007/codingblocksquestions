#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	string s;cin>>s;
	map<string,pair<int,int>>m;
	vector<int>v={2,3,5,7,11,13,17,19,23,29};
	m.insert({s,{0,n}});
	int ans=0;
	while(!m.empty())
	{
		auto it=m.begin();
		string str=it->first;
		pair<int,int>p=it->second;
		int x=p.first,y=p.second;
		int len=0,lenst=str.length();
		for(int i=x;i<y;i++)
		{
			int f=0;
			for(int j=0;j<y-len;j++)
			{
				string str1=str.substr(j,len+1);
				string nw="",rest="";
				if(j-1>=0)
				nw=str.substr(x,j-x);
				if(j+len+1<y)
				rest=str.substr(j+len+1,lenst-(j+len+1));
				long long xx=stoll(str1);
				bool ok=false;
				for(int k=0;k<v.size();k++)
				{
					if(xx%v[k]==0 and xx!=v[k])
					ok=true;
				}
				if(!ok and xx!=1)
				{
					ans++;
					if(j-1>=x)
					m.insert({nw,{0,nw.length()}});
					if(j+len+1<y)
					m.insert({rest,{0,rest.length()}});
					f=1;
					break;
				}
			}
			len++;
			if(f)
			break;
		}
		m.erase(it);
	}
	cout<<ans<<endl;
	return 0;
}
