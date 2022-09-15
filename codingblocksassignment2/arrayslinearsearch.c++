#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;std::cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;std::cin>>a;
		v.emplace_back(a);
	}
	int m;std::cin>>m;
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		if(v[i]==m)
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
