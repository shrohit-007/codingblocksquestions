#include<iostream>
int main() {
	int n;std::cin>>n;
    int row=2*n-1;
    int space=n-1;
    int num=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=space;j++)
        {
            std::cout<<"    ";
        }
        int d=(num-1)*2+1;
        int num1=num;
        for(int j=1;j<=d;j++)
        {
            if(num1<=d)
                std::cout<<num1<<"   ",num1++;
            else
            {
                std::cout<<d-j+num<<"   ";
            }
        }
        std::cout<<"\n";
        if(i<n)
            space--,num++;
        else
            space++,num--;
    }
	return 0;
}
