#include<bits/stdc++.h>
int main() {

	std::vector<int>v;
	int n;std::cin>>n;
	while(n>=8)
	{
		int rem=n%8;
		v.emplace_back(rem);
		n/=8;
	}
	v.emplace_back(n);
	reverse(v.begin(),v.end());
	for(int x:v)
	std::cout<<x;
	return 0;
}
