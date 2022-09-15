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
	int m=0,l=0,h=n-1;
	while(m<=h)
	{
		if(v[m]==0)
		{
			swap(v[m],v[l]);
			m++,l++;
		}
		else if(v[m]==1)
		{
			m++;
		}
		else
		{
			swap(v[m],v[h]);
			h--;
		}
	}
	for(int i=0;i<n;i++)
	{
		std::cout<<v[i]<<" ";
	}
	
	return 0;
}
