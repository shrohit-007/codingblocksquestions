#include<iostream>
int main() {
	int sum=0;
	while(sum>=0)
	{
		int x;std::cin>>x;
		sum+=x;
		if(sum>=0)
		std::cout<<x<<"\n";
	}
	return 0;
}
