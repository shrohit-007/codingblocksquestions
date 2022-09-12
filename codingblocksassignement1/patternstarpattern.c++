#include<iostream>
int main() {
	int n;std::cin>>n;
    int space=n/2;
    int stars=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            std::cout<<"  ";
        }
        for(int j=1;j<=stars;j++)
            std::cout<<"* ";
        if(i<n/2+1)
            space--,stars+=2;
        else
            space++,stars-=2;
        std::cout<<"\n";
    }
	return 0;
}
