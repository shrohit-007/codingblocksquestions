#include<bits/stdc++.h>
int main() {
	int s;std::cin>>s;
	int d;std::cin>>d;
	int num;std::cin>>num;
	int number=0;
	int j=1;
	while(num!=0)
	{
		number+=(num%10)*j;
		j*=s;
		num/=10;
	}
	//std::cout<<number<<"\n";
	std::vector<int>v;
	num=0;
	j=1;
	while(number!=0)
	{
		int rem=number%d;
		num+=((rem)*j);
		j*=10;
		number/=d;
	}
	std::cout<<num;

	return 0;
}
