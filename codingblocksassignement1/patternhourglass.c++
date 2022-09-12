#include<iostream>
int main() {
	 int n;std::cin>>n;
    int row=2*n+1;
    int space=0;
    int num=n;
    for(int i=1;i<=row;i++)
    {
        int x=num;
        for(int j=1;j<=space;j++)
            std::cout<<"  ";
        for(int j=1;j<=2*num+1;j++)
        {
            if(x>=0)
                std::cout<<x<<" ",x--;
            else
                std::cout<<num-(2*num+1-j)<<" ";
        }
        std::cout<<"\n";
        if(i<=n)
            space++,num--;
        else
            space--,num++;
    }
	return 0;
}
