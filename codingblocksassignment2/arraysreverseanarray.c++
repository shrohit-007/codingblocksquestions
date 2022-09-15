#include<bits/stdc++.h>
int main() {
	int n;std::cin>>n;
	std::vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;std::cin>>a;
		v.emplace_back(a);
	}
	std::reverse(v.begin(),v.end());
	for(int  x:v)
	std::cout<<x<<"\n";
	return 0;
}
