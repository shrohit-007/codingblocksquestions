#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;std::cin>>n;
	std::vector<int>v;
	int x=-1;
	for(int i=0;i<n;i++)
	{
		int a;std::cin>>a;
		v.emplace_back(a);
	}
	int m;std::cin>>m;
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(v[mid]==m)
		{
			x=mid;
			break;
		}
		else if(v[mid]>m)
		r=mid-1;
		else
		l=mid+1;
	}
	std::cout<<x<<" ";
}
