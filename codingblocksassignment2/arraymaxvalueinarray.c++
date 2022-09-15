#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;std::cin>>n;
	long x=-1e9;
	for(int i=0;i<n;i++)
	{
		long a;std::cin>>a;
		if(x<a)
		x=a;
	}
	std::cout<<x<<"\n";
	return 0;
}
