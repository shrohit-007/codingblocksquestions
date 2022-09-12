#include<iostream>
bool checkprime(int a)
{
	if(a==1)
	return false;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
		return false;
	}
	return true;
}
int main() {
	int n;std::cin>>n;
	for(int i=1;i<=n;i++)
	{
		bool ok=checkprime(i);
		if(ok)
		std::cout<<i<<"\n";
		
	}
	return 0;
}
