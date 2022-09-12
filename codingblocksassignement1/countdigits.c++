#include<iostream>
int main() {
	int n;std::cin>>n;
	int x;std::cin>>x;
	int cnt=0;
	while(n>0)
	{
		if(x==n%10)
		cnt++;
		n/=10;
	}
	std::cout<<cnt<<"\n";
	return 0;
}
