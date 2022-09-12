#include<iostream>
int main() {
	int n;std::cin>>n;
    int space=2*(n-1)-1;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        for(int j=1;j<=x;j++)
        {
            std::cout<<j<<"    ";
        }
        for(int j=1;j<=space;j++)
        {
            std::cout<<"     ";
        }
        if(x==n)
            x--;
        for(int j=x;j>=1;j--)
        {
            std::cout<<j<<"    ";
        }std::cout<<"\n";
        space-=2;
        if(space<0)
            space=0;
    }

	return 0;
}
